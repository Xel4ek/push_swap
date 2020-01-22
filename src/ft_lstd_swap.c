/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:16 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:44:00 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstd_swap(t_list **list)
{
	t_list *temp;

	if (list)
		if (*list && *list != (*list)->next)
		{
			temp = (*list)->next;
			(*list)->next = (*list)->next->next;
			(*list)->next->prev = *list;
			temp->prev = temp->prev->prev;
			temp->prev->next = temp;
			temp->next = *list;
			temp->next->prev = temp;
			*list = temp;
		}
	return (1);
}
