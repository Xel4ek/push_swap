/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_lstd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:57 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 18:53:00 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_sort_lstd(t_list **list, t_list **buff)
{
	int count;

	count = 0;
	ft_operation("pb", list, buff);
	if (ft_strcmp((*buff)->content, (*buff)->next->content) <= 0)
		ft_operation("rb", list, buff);
	while (*list)
	{
		if (ft_strcmp((*list)->content, (*buff)->content) >= 0 &&
				ft_strcmp((*list)->content, (*buff)->prev->content) <= 0)
			ft_operation("pb", list, buff);
		else if (ft_strcmp((*list)->content, (*buff)->content) >= 0 &&
				ft_strcmp((*buff)->content, (*buff)->prev->content) >= 0)
			ft_operation("pb", list, buff);
		else if (ft_strcmp((*list)->content, (*buff)->prev->content) <= 0 &&
				ft_strcmp((*buff)->content, (*buff)->prev->content) >= 0)
			ft_operation("pb", list, buff);
		else
			ft_operation("rb", list, buff);
		count++;
	}
	while (ft_strcmp((*buff)->content, (*buff)->prev->content) <= 0)
	{
		ft_operation("rb", list, buff);
		count++;
	}
	while (*buff)
	{
		ft_operation("pa", list, buff);
		count++;
	}
	return (count);
}
