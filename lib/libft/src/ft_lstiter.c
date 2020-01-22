/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:54:43 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 17:10:57 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_forward_list *lst, void (*f)(t_forward_list *elem))
{
	if (*f)
		while (lst)
		{
			(*f)(lst);
			lst = lst->next;
		}
}

void	ft_lstditer(t_list *list, void (*f)())
{
	t_list *ptr;

	ptr = NULL;
	if (*f)
	{
		if (list)
		{
			if (list != list->next)
				while (list && ptr != list->next)
				{
					if (!ptr)
						ptr = list;
					(*f)(list);
					list = list->next;
				}
		}
		(*f)(list);
	}
}

void	ft_lstditer_two(t_list *list1, t_list *list2, void (*f)(t_list *elem))
{
	size_t size;
	size_t len1;
	size_t len2;
	size_t i;

	i = 0;
	size = ft_max((len1 = ft_lstdlen(list1)), (len2 = ft_lstdlen(list2)));
	if (*f)
	{
		while (i < size)
		{
			if (i < len1)
			{
				(*f)(list1);
				list1 = list1->next;
			}
			else
				(*f)(NULL);
			printf("\t");
			if (i < len2)
			{
				(*f)(list2);
				list2 = list2->next;
			}
			else
				(*f)(NULL);
			printf("\n");
			i++;
		}
	}
}
