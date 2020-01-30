/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:21 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 17:44:47 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_list *list)
{
	int len;

	len = ft_lstdlen(list);
	if (len)
		while (--len)
		{
			if (((t_ps_content*)(list->content))->serial >=
					((t_ps_content*)(list->next->content))->serial)
				return (0);
			list = list->next;
		}
	return (1);
}
