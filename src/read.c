/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:27 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 17:44:05 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_list	*ft_strsplit_to_lstd(const char *string)
{
	t_list			*list;
	char			**tab;
	int				size;
	t_ps_content	*item;

	list = NULL;
	if (!string)
		return (NULL);
	tab = ft_strsplit(string, ' ');
	size = 0;
	while (tab[size])
	{
		item = ft_ps_new_content_int(ft_atoi(tab[size]));
		ft_lstd_push_front(&list, ft_lstdnew(item, sizeof(*item)));
		ft_memdel((void**)&(item));
		ft_memdel((void**)&tab[size]);
		size++;
	}
	ft_memdel((void**)&tab);
	return (list);
}
