#include "libft.h"

void ft_lstd_push_front(t_list **head, t_list *new)
{
	if (head && new)
	{
		if(*head) {
			new->next = *head;
			new->prev = (*head)->prev;
			if ((*head)->prev)
				(*head)->prev->next = new;
			*head = new;
			(*head)->next->prev = *head;
		}
		else
			*head = new;
	}
}


//void	ft_list_push(t_list **current, t_list *new)
//{
//	if (current && new)
//	{
//		new->next = *current;
//		*current = new;
//	}
//}