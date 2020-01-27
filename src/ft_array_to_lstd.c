/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_lstd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:52 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:52:29 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_add_int_at_lstd(t_list **lstd, const int num){
	t_ps_content	*item;

	item = (t_ps_content*)malloc(sizeof(t_ps_content));
	item->value = num;
	item->operation = -1;
	item->content_size = sizeof(int);
	item->serial = num;
	item->content = num;
	ft_lstd_push_back(lstd, ft_lstdnew(item, sizeof(t_ps_content)));
	ft_memdel((void**)&item);
}

void	ft_array_to_lstd(const int *tab, const int len, t_list **list1, t_list **list2)
{
	int				i;

	*list1 = NULL;
	*list2 = NULL;
	i = 0;
	while (tab[i] != -1)
		ft_add_int_at_lstd(list1, tab[i++]);
	i++;
	while (i < len)
		ft_add_int_at_lstd(list2, tab[i++]);
}
