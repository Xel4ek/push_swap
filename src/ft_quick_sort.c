#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int longes_subsequence(const t_list *list, t_list **buff){
	int count = 0;
	int len = ft_lstdlen(list);
	int a[len];
	int p[len];
	int d[len];
	int i = 0;
	t_ps_content *item;

	while (i < len) {
		a[i++] = ((t_ps_content*)list->content)->serial;
		list = list->next;
	}

	i =0;
	int j;

	while( i < len){
		d[i] = 1;
		p[i] = -1;
		j = 0;
		while (j < i){
			if (a[j] < a[i])
				if (1 + d[j] > d[i]){
					d[i] = 1 + d[j];
					p[i] = j;
				}
			++j;
		}
		++i;
	}
;
	int ans = d[0];
	int pos = 0;
	i = 0;
	while(i<len){
		if(d[i] > ans){
			ans = d[i];
			pos = i;
		}
		++i;
	}

	while(pos != -1) {
//		ft_lstd_push_back(buff, ft_lstdnew(ft_itoa(index[i]), 8));
		item = ft_ps_new_content(ft_itoa(a[pos]));
		ft_lstd_push_front(buff, ft_lstdnew(item, sizeof(*item)));
		pos = p[pos];

		i++;
	}

	return ans;
}

/*
int ft_quick_sort(t_list **list, t_list **buff, char *pivot){
	int count;

	count = 0;
	int len;
	int i;

	len = ft_lstdlen(*list);
	i = 0;
	while (i++ < len * 2)
	{
		if (ft_strcmp2((*list)->content, pivot) > 0) {
				if (!*buff) {
					ft_operations(PB, list, buff);
				}
			else if(ft_strcmp2((*list)->content, (*buff)->content)>=0 && ft_strcmp2((*list)->content, (*buff)->prev->content) <= 0)
					ft_operations(PB,list, buff);
				else if(ft_strcmp2((*list)->content, (*buff)->content)>=0 && ft_strcmp2((*buff)->content, (*buff)->prev->content)>=0)
					ft_operations(PB,list, buff);
				else if(ft_strcmp2((*list)->content, (*buff)->prev->content)<=0 && ft_strcmp2((*buff)->content, (*buff)->prev->content)>=0) {
					ft_operations(PB, list, buff);
				}
				else
				{
					ft_operations(RB, list, buff);
				}
		} else{
			ft_operations(RA, list, buff);
		}

		count++;
	}


	return count;
}
*/