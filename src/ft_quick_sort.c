/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:53 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 16:22:50 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	longest_subsequence_finder(const int *src, int *p, int *d,
										const int len)
{
	int i;
	int j;

	i = -1;
	while (++i < len)
	{
		d[i] = 1;
		p[i] = -1;
		j = -1;
		while (++j < i)
			if (src[j] < src[i] && 1 + d[j] > d[i])
			{
				d[i] = 1 + d[j];
				p[i] = j;
			}
	}
}

static void	write_to_lstd(int pos, const int *src, int *p, t_list **buff)
{
	t_ps_content *item;

	while (pos != -1)
	{
		item = ft_ps_new_content_int(src[pos]);
		ft_lstd_push_front(buff, ft_lstdnew(item, sizeof(*item)));
		pos = p[pos];
		ft_memdel((void**)&(item));
	}
}

int			longest_subsequence(const int *src, const int len, t_list **buff)
{
	int p[len];
	int d[len];
	int i;
	int ans;
	int pos;

	longest_subsequence_finder(src, p, d, len);
	ans = d[0];
	pos = 0;
	i = -1;
	while (++i < len)
		if (d[i] > ans)
		{
			ans = d[i];
			pos = i;
		}
	write_to_lstd(pos, src, p, buff);
	return (ans);
}

int			longest_subsequence_lstd(const t_list *list, t_list **buff,
									int const len)
{
	int a[len];
	int i;

	i = 0;
	while (i < len)
	{
		a[i++] = ((t_ps_content*)list->content)->serial;
		list = list->next;
	}
	return (longest_subsequence(a, len, buff));
}
