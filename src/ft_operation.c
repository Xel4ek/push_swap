/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:38 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:38:00 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap_lstd(char *string, t_list **a, t_list **b)
{
	if (!ft_strcmp(string, "sa"))
	{
		if (*a)
			return (ft_lstd_swap(a));
	}
	if (!ft_strcmp(string, "sb"))
	{
		if (*b)
			return (ft_lstd_swap(b));
	}
	if (!ft_strcmp(string, "ss"))
	{
		if (*a)
			return (ft_lstd_swap(a));
		if (*b)
			return (ft_lstd_swap(b));
		return (ft_lstd_swap(a) && ft_lstd_swap(b));
	}
	return (1);
}

int	ft_push_lstd(char *string, t_list **a, t_list **b)
{
	if (!ft_strcmp(string, "pa") && *b)
	{
		ft_lstd_push_front(a, ft_lstdnew((*b)->content, (*b)->content_size));
		ft_lstd_pop_front(b);
	}
	if (!ft_strcmp(string, "pb") && *a)
	{
		ft_lstd_push_front(b, ft_lstdnew((*a)->content, (*a)->content_size));
		ft_lstd_pop_front(a);
	}
	return (1);
}

int	ft_rotate_lstd(char *string, t_list **a, t_list **b)
{
	if (!ft_strcmp(string, "ra"))
	{
		if (*a)
			*a = (*a)->next;
	}
	if (!ft_strcmp(string, "rb"))
	{
		if (*b)
			*b = (*b)->next;
	}
	if (!ft_strcmp(string, "rr"))
	{
		if (*a)
			*a = (*a)->next;
		if (*b)
			*b = (*b)->next;
	}
	return (1);
}

int	ft_rrotate_lstd(char *string, t_list **a, t_list **b)
{
	if (!ft_strcmp(string, "rra"))
	{
		if (*a)
			*a = (*a)->prev;
	}
	if (!ft_strcmp(string, "rrb"))
	{
		if (*b)
			*b = (*b)->prev;
	}
	if (!ft_strcmp(string, "rrr"))
	{
		if (*a)
			*a = (*a)->prev;
		if (*b)
			*b = (*b)->prev;
	}
	return (1);
}

int	ft_operation(char *string, t_list **a, t_list **b)
{
	if (string[2] != 0)
		return (ft_rrotate_lstd(string, a, b));
	if (*string == 'r')
		return (ft_rotate_lstd(string, a, b));
	if (*string == 'p')
		return (ft_push_lstd(string, a, b));
	if (*string == 's')
		return (ft_swap_lstd(string, a, b));
	return (0);
}

int	ft_rrotate_lstd_e(enum Operations operation, t_list **a, t_list **b)
{
	if (operation == RRA)
	{
		if (*a)
			*a = (*a)->prev;
	}
	if (operation == RRB)
	{
		if (*b)
			*b = (*b)->prev;
	}
	if (operation == RRR)
	{
		if (*a)
			*a = (*a)->prev;
		if (*b)
			*b = (*b)->prev;
	}
	return (1);
}

int	ft_rotate_lstd_e(enum Operations operation, t_list **a, t_list **b)
{
	if (operation == RA)
	{
		if (*a)
			*a = (*a)->next;
	}
	if (operation == RB)
	{
		if (*b)
			*b = (*b)->next;
	}
	if (operation == RR)
	{
		if (*a)
			*a = (*a)->next;
		if (*b)
			*b = (*b)->next;
	}
	return (1);
}

int	ft_push_lstd_e(enum Operations operation, t_list **a, t_list **b)
{
	if (operation == PA && *b)
	{
		ft_lstd_push_front(a, ft_lstdnew((*b)->content, (*b)->content_size));
		ft_lstd_pop_front(b);
	}
	if (operation == PB && *a)
	{
		ft_lstd_push_front(b, ft_lstdnew((*a)->content, (*a)->content_size));
		ft_lstd_pop_front(a);
	}
	return (1);
}

int	ft_swap_lstd_e(enum Operations operation, t_list **a, t_list **b)
{
	if (operation == SA)
	{
		if (*a)
			return (ft_lstd_swap(a));
	}
	if (operation == SB)
	{
		if (*b)
			return (ft_lstd_swap(b));
	}
	if (operation == SS)
	{
		if (*a && !*b)
			return (ft_lstd_swap(a));
		if (*b && !*a)
			return (ft_lstd_swap(b));
		return (ft_lstd_swap(a) && ft_lstd_swap(b));
	}
	return (1);
}

int	ft_operations(enum Operations operation, t_list **a, t_list **b)
{
	if (operation / 3 == 2)
		return (ft_rrotate_lstd_e(operation, a, b));
	if (operation / 3 == 1)
		return (ft_rotate_lstd_e(operation, a, b));
	if (operation / 3 == 3)
		return (ft_push_lstd_e(operation, a, b));
	if (operation / 3 == 0)
		return (ft_swap_lstd_e(operation, a, b));
	return (0);
}



