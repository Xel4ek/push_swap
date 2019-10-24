#include "libft.h"

void ft_lstd_push_back(t_list **head, t_list *new)
{
	if (head && new)
	{
		if(*head) {
			new->next = *head;

			new->prev = (*head)->prev;
			new->next->prev = new;
			new->prev->next = new;
		}
		else
			*head = new;
	}
}