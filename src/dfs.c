/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:48 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:25:56 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_item_in_queue(t_list **queue, t_list **visited,
	t_list **list, t_list **buff, enum opns operation, char *temp)
{
	t_ps_string *item;
	int list_len;
	int buff_len;
	char *itoa_ptr;

	ft_operations(operation, list, buff);
	item = (t_ps_string*)malloc(sizeof(t_ps_string));
	list_len = ft_lstdlen(*list);
	buff_len = ft_lstdlen(*buff);
	item->string = ft_lstd_to_array(*list, *buff, list_len, buff_len);
	item->size = list_len + buff_len + 1;
	if (0 == ft_is_array_in_lstd(item->string, item->size, *visited))
	{
		item->queue = (char*)malloc(sizeof(char) * MAX_QUEUE_SIZE);
		ft_strcpy(item->queue, temp);
		ft_strcat(item->queue, " ");
		itoa_ptr = ft_itoa(operation);
		ft_strcat(item->queue, itoa_ptr);
		ft_memdel((void**)&(itoa_ptr));
		ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
		ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
	}
	else
		ft_memdel((void**)&(item->string));
	ft_memdel((void**)&item);
	operation_move_bask(operation, list, buff);
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

void	ft_add_queue(t_list **list, t_list **buff,
		t_list **queue, t_list **visited, char *temp)
{
	enum opns op;

	op = SA;
	while (op < FREEZE)
	{
		if ((*buff == NULL && op == PA) || (*list == NULL && op == PB))
		{
			++op;
			continue;
		}
		add_item_in_queue(queue, visited, list, buff, op++, temp);
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
	t_list	*buff;
	t_list	*queue;
	t_list	*visited;
	char	*item;

	buff = NULL;
	queue = NULL;
	visited = NULL;
	init_queue(*list, buff, &queue, &visited);
	while (!is_sorted(*list) || buff)
	{
		item = ft_take_from_queue(list, &buff, &queue);
		if (is_sorted(*list) && !buff)
			ft_print_operators(item);
		else
			ft_add_queue(list, &buff, &queue, &visited, item);
		ft_memdel((void**)&item);
	}
	ft_lstd_del(&queue);
	ft_lstd_del_4(&visited);
}