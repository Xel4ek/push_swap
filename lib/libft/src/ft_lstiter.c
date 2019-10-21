/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:54:43 by hwolf             #+#    #+#             */
/*   Updated: 2019/09/07 19:18:04 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_forward_list *lst, void (*f)(t_forward_list *elem))
{
	if (*f)
		while (lst)
		{
			(*f)(lst);
			lst = lst->next;
		}
}

void	ft_lstditer(t_list *list, void (*f)(t_list *elem))
{
	t_list *ptr;
	ptr = NULL;

	if (*f) {
		if (list)
			while (list && ptr != list) {
				if (!ptr)
					ptr = list;
				(*f)(list);
				list = list->next;
			}
		else
			(*f)(list);
	}
}