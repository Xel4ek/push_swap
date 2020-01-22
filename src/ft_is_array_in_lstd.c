/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_array_in_lstd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:00 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:46:46 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_is_array_in_lstd(const int *tab, const int len, t_list *list)
{
	t_list *ptr;

	ptr = NULL;
	if (list)
	{
		if (list != list->next)
		{
			while (list && ptr != list->next)
			{
				if (!ptr)
					ptr = list;
				if (!ft_memcmp(((t_ps_string*)list->content)->string,
						tab, len * sizeof(int)))
					return (1);
				list = list->next;
			}
		}
		else
		{
			if (!ft_memcmp(((t_ps_string*)list->content)->string,
						tab, len * sizeof(int)))
				return (1);
		}
	}
	return (0);
}
