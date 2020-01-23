/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:53 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:18:10 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int longest_subsequence_lstd(const t_list *list, t_list **buff){
	int len;

	len = ft_lstdlen(list);

	int a[len];
	int p[len];
	int d[len];
	int i;
	int ans;
	int pos;
	int j;
	t_ps_content *item;

	i = 0;
	while (i < len)
	{
		a[i++] = ((t_ps_content*)list->content)->serial;
		list = list->next;
	}

	i = 0;

	while (i < len)
	{
		d[i] = 1;
		p[i] = -1;
		j = 0;
		while (j < i)
		{
			if (a[j] < a[i])
				if (1 + d[j] > d[i])
				{
					d[i] = 1 + d[j];
					p[i] = j;
				}
			++j;
		}
		++i;
	}
	ans = d[0];
	pos = 0;
	i = 0;
	while (i < len)
	{
		if (d[i] > ans)
		{
			ans = d[i];
			pos = i;
		}
		++i;
	}
	while (pos != -1)
	{
		item = ft_ps_new_content_int(a[pos]);
		ft_lstd_push_front(buff, ft_lstdnew(item, sizeof(*item)));
		pos = p[pos];
		ft_memdel((void**)&(item));
		i++;
	}
	return (ans);
}

int *longest_subsequence(const int *src, const int len){

}