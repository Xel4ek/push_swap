/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:07 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:20:59 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_aply_rr(int rr, t_list **list, t_list **buff)
{
	while (rr)
	{
		if (rr > 0)
		{
			ft_operations(RR, list, buff);
			ft_printf("rr\n");
			--rr;
		}
		else
		{
			ft_operations(RRR, list, buff);
			ft_printf("rrr\n");
			++rr;
		}
	}
}

static void	ft_aply_ra(int ra, t_list **list, t_list **buff)
{
	while (ra)
	{
		if (ra > 0)
		{
			ft_operations(RA, list, buff);
			ft_printf("ra\n");
			--ra;
		}
		else
		{
			ft_operations(RRA, list, buff);
			ft_printf("rra\n");
			++ra;
		}
	}
}

static void	ft_aply_rb(int rb, t_list **list, t_list **buff)
{
	while (rb)
	{
		if (rb > 0)
		{
			ft_operations(RB, list, buff);
			ft_printf("rb\n");
			--rb;
		}
		else
		{
			ft_operations(RRB, list, buff);
			ft_printf("rrb\n");
			++rb;
		}
	}
}

void		sort_lstds(t_list **list, t_list **buff)
{
	t_rotate_data rotate;

	rotate = ft_find_min_rotatre(list, buff);
	ft_aply_rr(rotate.rr, list, buff);
	ft_aply_ra(rotate.ra, list, buff);
	ft_aply_rb(rotate.rb, list, buff);
	ft_operations(PA, list, buff);
	ft_printf("pa\n");
}

int			ft_find_min_step(int temp, int list_step)
{
	int min;
	int sign;

	min = 0;
	if (!(((unsigned)(temp > 0)) ^ ((unsigned)(list_step > 0))))
	{
		sign = 1;
		if (temp < 0 || list_step < 0)
			sign = -1;
		min = ft_min(ft_abs(temp), ft_abs(list_step)) * sign;
	}
	return (min);
}