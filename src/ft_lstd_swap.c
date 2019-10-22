#include "push_swap.h"

int ft_lstd_swap(t_list **list)
{
	t_list *temp;

	if(list)
		if(*list && *list != (*list)->next)
		{
			temp = (*list)->next;
			(*list)->next = (*list)->next->next;
			(*list)->next->prev = *list;
			temp->prev = temp->prev->prev;
			temp->prev->next = temp;
			temp->next = *list;
			temp->next->prev = temp;
			*list = temp;
		}
	return 1;
}