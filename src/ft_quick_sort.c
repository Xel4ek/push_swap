#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

//int ceilIndex(char **subsequence,int startLeft,
//			  int startRight,
//			  char *key ){
//
//	int mid = 0;
//	int left = startLeft;
//	int right = startRight;
//	int ceilIndex = 0;
//	int  ceilIndexFound = 0;
//
//	for (mid = (left + right) / 2; left <= right && !ceilIndexFound; mid = (left + right) / 2) {
//		if (ft_strcmp2(subsequence[mid], key)> 0) {
//			right = mid - 1;
//		}
//		else if (!ft_strcmp2(subsequence[mid], key)) {
//			ceilIndex = mid;
//			ceilIndexFound = 1;
//		}
//		else if (mid + 1 <= right && ft_strcmp2(subsequence[mid + 1], key) >= 1) {
//			subsequence[mid + 1] = key;
//			ceilIndex = mid + 1;
//			ceilIndexFound = 1;
//		} else {
//			left = mid + 1;
//		}
//	}
//
//	if (!ceilIndexFound) {
//		if (mid == left) {
//			subsequence[mid] = key;
//			ceilIndex = mid;
//		}
//		else {
//			subsequence[mid + 1] = key;
//			ceilIndex = mid + 1;
//		}
//	}
//
//	return ceilIndex;
//}

int longes_subsequence(t_list *list, t_list **buff){
	int count = -1;
	int len = ft_lstdlen(list);
	t_list *terminator;
	terminator = NULL;
	int i;
	int index[len];
	char *content[i];

	i =0;
	while (i < len)
	{
		index[i] = INT_MAX;
		content[i] = NULL;
		i++;

	}
//	tab[0] = INTMAX_MIN;
	content[0] = list->content;
	index[0] = 0;
	i = 0;
	while(terminator != list)
	{
		if (!terminator)
			terminator = list;
//		index[i] = ceilIndex(content, 0, i, list->content);
//		if (*buff) {
//			if (ft_strcmp2(list->content, (*buff)->content) > 0) {
//				ft_lstd_push_front(buff, ft_lstdnew(list->content, list->content_size));
//			} else if (ft_strcmp2(list->content, (*buff)->content) < 0 &&
//					   ft_strcmp2(list->content, (*buff)->next->content) > 0) {
//				ft_lstd_pop_front(buff);
//				ft_lstd_push_front(buff, ft_lstdnew(list->content, list->content_size));
//			}
//		}
//		else
//			ft_lstd_push_front(buff, ft_lstdnew(list->content, list->content_size));
//
		list = list->next;
		if (count < index[i])
			count = index[i];
		i++;
//		printf("count: %d\n",count);
	}

	i = 0;
	while(i<len) {
//		ft_lstd_push_back(buff, ft_lstdnew(ft_itoa(index[i]), 8));
		ft_lstd_push_back(buff, ft_lstdnew(content[i], 8));
		i++;
	}

	return count + 1;
}


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

