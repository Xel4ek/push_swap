/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:48 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 18:20:20 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_item_in_queue(t_plist *pack, enum opns operation, char *temp)
{
	t_ps_string	*item;
	int			list_len;
	int			buff_len;

	ft_operations(operation, &pack->list, &pack->buff);
	item = (t_ps_string*)malloc(sizeof(t_ps_string));
	list_len = ft_lstdlen(pack->list);
	buff_len = ft_lstdlen(pack->buff);
	item->string = ft_lstd_to_array(pack->list, pack->buff, list_len, buff_len);
	item->size = list_len + buff_len + 1;
	if (0 == ft_is_array_in_lstd(item->string, item->size, pack->visited))
	{
		item->queue = (char*)malloc(sizeof(char) * MAX_QUEUE_SIZE);
		ft_add_digit_to_str(item->queue, temp, operation);
		ft_lstd_push_back(&pack->queue, ft_lstdnew(item, sizeof(*item)));
		ft_lstd_push_back(&pack->visited, ft_lstdnew(item, sizeof(*item)));
	}
	else
		ft_memdel((void**)&(item->string));
	ft_memdel((void**)&item);
	operation_move_bask(operation, &pack->list, &pack->buff);
}

void	init_queue(t_list *list, t_list *buff, t_list **queue, t_list **visited)
{
	int			list_len;
	int			buff_len;
	t_ps_string	*item;

	list_len = ft_lstdlen(list);
	buff_len = ft_lstdlen(buff);
	item = (t_ps_string*)malloc(sizeof(t_ps_string));
	item->string = ft_lstd_to_array(list, buff, list_len, buff_len);
	item->size = list_len + buff_len + 1;
	item->queue = (char*)malloc(sizeof(char) * MAX_QUEUE_SIZE);
	item->queue[0] = '+';
	item->queue[1] = 0;
	ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
	ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
	ft_memdel((void**)&item);
}

void	ft_add_queue(t_plist *pack, char *temp)
{
	enum opns op;

	op = SA;
	while (op < FREEZE)
	{
		if ((pack->buff == NULL && op == PA) ||
			(pack->list == NULL && op == PB))
		{
			++op;
			continue;
		}
		add_item_in_queue(pack, op++, temp);
	}
}

char	*ft_take_from_queue(t_list **list, t_list **buff, t_list **queue)
{
	t_ps_string	*item;
	char		*queue_sting;

	ft_lstd_del_2(list);
	ft_lstd_del_2(buff);
	item = (t_ps_string*)((*queue)->content);
	ft_array_to_lstd(item->string, item->size, list, buff);
	queue_sting = (char*)malloc(sizeof(char) * MAX_QUEUE_SIZE);
	ft_strcpy(queue_sting, item->queue);
	ft_lstd_pop_front(queue);
	return (queue_sting);
}

void	ft_bfs_sort(t_list **list)
{
	t_plist pack;
	char	*item;

	pack.list = *list;
	pack.buff = NULL;
	pack.queue = NULL;
	pack.visited = NULL;
	init_queue(pack.list, pack.buff, &(pack.queue), &(pack.visited));
	while (!is_sorted(pack.list) || pack.buff)
	{
		item = ft_take_from_queue(&(pack.list), &(pack.buff), &(pack.queue));
		if (is_sorted(pack.list) && !(pack.buff))
			ft_print_operators(item);
		else
			ft_add_queue(&pack, item);
		ft_memdel((void**)&item);
	}
	ft_lstd_del(&(pack.queue));
	ft_lstd_del_4(&(pack.visited));
	*list = pack.list;
}
