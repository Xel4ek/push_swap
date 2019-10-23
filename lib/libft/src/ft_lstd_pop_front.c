#include "libft.h"

void ft_lstd_pop_front(t_list **head)
{
	t_list *ptr;

	ptr = NULL;
	if (head && *head)
		{
			if (!ptr)
				ptr = *head;

			if (ptr != (*head)->next)
				ptr = (*head)->next;
			else
				ptr = NULL;
			if (ptr != NULL) {
				ptr->prev = (*head)->prev;
			}
			ft_memdel(&(*head)->content);
			ft_memdel((void**)head);
			if (ptr != NULL)
				ptr->prev->next = ptr;
			*head = ptr;
		}
}
//{
//if (alst && *alst && (*del))
//{
//(*del)((*alst)->content, (*alst)->content_size);
//free(*alst);
//*alst = NULL;
//}
//}
