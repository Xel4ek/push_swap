/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_del_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:09 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:44:19 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstd_del_2(t_list **list)
{
	if (list)
		while (*list)
			ft_lstd_pop_front(list);
}

void	ft_lstd_del_3(t_list **list)
{
	if (list)
		while (*list)
			ft_lstd_pop_front(list);
}

void	ft_lstd_del_4(t_list **list)
{
	if (list)
		while (*list)
		{
			ft_memdel((void**)&(((t_ps_string*)((*list)->content))->string));
			ft_memdel((void**)&(((t_ps_string*)((*list)->content))->queue));
			ft_lstd_pop_front(list);
		}
}
