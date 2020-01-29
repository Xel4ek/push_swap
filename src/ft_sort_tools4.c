/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tools4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:05:58 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:21:03 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_rotate_data	set_rotate(int const rr, int const ra, int const rb,
							int const summ)
{
	t_rotate_data item;

	item.rr = rr;
	item.ra = ra;
	item.rb = rb;
	item.summ = summ;
	return (item);
}

t_rotate_data	ft_find_min_rotatre(t_list **list, t_list **buff)
{
	int i;
	int size;
	t_rotate_data rotate;
	int temp;
	int list_step;
	int min;
	int summ;

	i = -1;
	rotate = set_rotate(0, 0, 0, -1);
	if (!(size = ft_lstdlen(*buff)))
		return (rotate);
	while (++i < size)
	{
		temp = i;
		if (size < 2 * i)
			temp -= size;
		list_step = steps_to_add(*list, *buff);
		min = ft_find_min_step(temp, list_step);
		summ = ft_abs(list_step - min) + ft_abs(temp - min) + ft_abs(min);
		if (rotate.summ > summ || rotate.summ == -1)
			rotate = set_rotate(min, list_step - min, temp - min, summ);
		*buff = (*buff)->next;
	}
	return (rotate);
}

static void		clear_lstd(t_list **list, int size)
{
	while (size--)
	{
		((t_ps_content*)(*list)->content)->operation = -1;
		*list = (*list)->next;
	}
}

static void	mark_sequence(int take_it, t_list **list, t_list *buff, int size)
{
	int i;

	while (take_it--)
	{
		i = size;
		while (i--)
		{
			if (((t_ps_content*)(*list)->content)->serial ==
				((t_ps_content*)buff->content)->value)
				((t_ps_content*)(*list)->content)->operation = FREEZE;
			(*list) = (*list)->next;
		}
		buff = buff->next;
	}
}

int			ft_sequence_prepear(t_list **list)
{
	int		size;
	int		i;
	int		max_steps;
	int		take_it;
	t_list	*buff;

	size = ft_lstdlen(*list);
	take_it = 0;
	i = size;
	buff = NULL;
	while (i--)
	{
		max_steps = longest_subsequence_lstd(*list, &buff, ft_lstdlen(*list));
		if (max_steps > take_it)
		{
			take_it = max_steps;
			clear_lstd(list, size);
			mark_sequence(take_it, list, buff, size);
		}
		ft_lstd_del(&buff);
		(*list) = (*list)->next;
	}
	return (take_it);
}
