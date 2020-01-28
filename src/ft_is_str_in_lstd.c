/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_in_lstd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:04 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:45:35 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstditer_reduce_2(t_list *list, char *string, int (*f)())
{
	t_list *ptr;

	ptr = NULL;
	if (*f && list && list != list->next)
			while (list && ptr != list->next)
			{
				if (!ptr)
					ptr = list;
				if (!(*f)(((t_ps_string*)list->content)->string, string))
					return (1);
				list = list->next;
			}
	if (!(*f)(((t_ps_string*)list->content)->string, string))
		return (1);
	return (0);
}

size_t	ft_is_str_in_lstd(char *string, t_list *list)
{
	return (ft_lstditer_reduce_2(list, string, ft_strcmp));
}
