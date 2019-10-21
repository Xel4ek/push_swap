#include "libft.h"

void	ft_lstd_collapse(t_list *head)
{
	t_list *ptr;

	ptr = NULL;
	if (head && head->next) {
		while (head->next && head != ptr) {
			if (!ptr)
				ptr = head;
			head = head->next;
		}
		head->next = ptr;
		head->next->prev = head;
	}
	else if (head){
		head->next = head;
		head->next->prev = head;
	}

}
