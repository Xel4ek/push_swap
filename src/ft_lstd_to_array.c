/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:21 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 16:08:01 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	*ft_lstd_to_array(t_list *list1, t_list *list2, int len1, int len2)
{
	int *ptr;
	int *temp;

	if (!(ptr = (int*)malloc(sizeof(int) * (len1 + len2 + 1))))
		return (NULL);
	temp = ptr;
	while (len1)
	{
		len1--;
		*temp++ = ((t_ps_content*)list1->content)->serial;
		list1 = list1->next;
	}
	*temp++ = -1;
	while (len2)
	{
		len2--;
		*temp++ = ((t_ps_content*)list2->content)->serial;
		list2 = list2->next;
	}
	return (ptr);
}
