/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:47 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:20:33 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_circle(t_list *list)
{
	t_list *ptr;

	if ((ptr = list->next))
	{
		while (ptr->next)
		{
			ptr->next->prev = ptr;
			ptr = ptr->next;
		}
		ptr->next = list;
		ptr->next->prev = ptr;
	}
	else
	{
		list->next = list;
		list->prev = list;
	}
}

int		ft_queue_less(t_list *a, t_list *b)
{
	int delta;

	delta = ((t_ps_string*)(a->content))->queue_len -
			((t_ps_string*)(b->content))->queue_len;
	return (delta + (ft_sort_ratio(((t_ps_string*)(a->content))->string,
				((t_ps_string*)(a->content))->size) -
				ft_sort_ratio(((t_ps_string*)(b->content))->string,
				((t_ps_string*)(b->content))->size)));
}

void	ft_queue_sort(t_list **source)
{
	ft_merge_sort_by(source, &ft_queue_less);
}
