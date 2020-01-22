/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:27 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:42:30 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

char	*ft_lstd_to_str(t_list *list1, t_list *list2, int size1,
			int size2, int len1, int len2)
{
	char *ptr;
	char *temp;
	char *itoa_ptr;
	if (!(ptr = (char*)malloc(size1 + size2 + len1 + len2 + 2)))
		return (NULL);
	*ptr = 0;
	temp = ptr;
	while (len1)
	{
		len1--;
		itoa_ptr = ft_itoa(((t_ps_content*)list1->content)->serial);
		temp = ft_strcat_end(temp, itoa_ptr);
		ft_memdel((void**)&itoa_ptr);
		*temp++ = ' ';
		*temp = 0;
		list1 = list1->next;
	}
	*temp++ = '/';
	*temp = 0;
	while (len2)
	{
		len2--;
		*temp++ = ' ';
		*temp = 0;
		itoa_ptr = ft_itoa(((t_ps_content*)list2->content)->serial);
		temp = ft_strcat_end(temp, itoa_ptr);
		ft_memdel((void**)&itoa_ptr);
		list2 = list2->next;
	}
	*temp = 0;
	return (ptr);
}
