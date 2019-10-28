#include "push_swap.h"
#include <stdio.h>

int ft_sort_lstd(t_list **list, t_list **buff)
{
	int count;
	count= 0;
	ft_operation("pb", list, buff);
//	ft_operation("pb", list, buff);
	if(ft_strcmp2((*buff)->content, (*buff)->next->content) <=0)
			ft_operation("rb",list, buff);
	while (*list){
			if(ft_strcmp2((*list)->content, (*buff)->content)>=0 && ft_strcmp2((*list)->content, (*buff)->prev->content) <= 0)
				ft_operation("pb",list, buff);
			else if(ft_strcmp2((*list)->content, (*buff)->content)>=0 && ft_strcmp2((*buff)->content, (*buff)->prev->content)>=0)
				ft_operation("pb",list, buff);
			else if(ft_strcmp2((*list)->content, (*buff)->prev->content)<=0 && ft_strcmp2((*buff)->content, (*buff)->prev->content)>=0) {
				ft_operation("pb", list, buff);
			}
			else
				ft_operation("rb", list, buff);
			count++;
	}
	while( ft_strcmp2((*buff)->content, (*buff)->prev->content)<=0) {
		ft_operation("rb", list, buff);
		count++;
	}
	while(*buff) {
		ft_operation("pa", list, buff);
		count++;
	}
	return 	count;
}