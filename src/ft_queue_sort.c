#include "push_swap.h"

void ft_circle(t_list *list){
	t_list *ptr;
	t_list *tail;
	int max_size = 20;

	if ((ptr = list->next)) {
		while (ptr->next) {
			ptr->next->prev = ptr;

//			if(--max_size == 0) {
//				ft_lstd_del(&(ptr->next));
//				break;
//			}
			ptr = ptr->next;
		}
		ptr->next = list;
		ptr->next->prev = ptr;
	}
	else
	{
		list->next = list;
		list->prev = list;
	}
}

int ft_queue_less(t_list *a, t_list *b){
	return (ft_sort_ratio(((t_ps_string*)(a->content))->string, ((t_ps_string*)(a->content))->size) - ft_sort_ratio(((t_ps_string*)(b->content))->string, ((t_ps_string*)(b->content))->size));

}

void ft_queue_sort(t_list **source)
{
	ft_merge_sort_by(source, &ft_queue_less);

}