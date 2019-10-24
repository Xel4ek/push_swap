#include "push_swap.h"

void	ft_lstditer_reduce(t_list *list, int *n, void (*f)())
{
	t_list *ptr;

	ptr = NULL;
	if (*f) {
		if (list) {
			if (list != list->next)
				while (list && ptr != list->next) {
					if (!ptr)
						ptr = list;
					(*f)(list, n);
					list = list->next;
				}
		}
		(*f)(list, n);
	}
}

void reduce(t_list *list, int *n)
{
	*n += (*(int*)(list->content) == 0);
}

int	is_sorted(t_list *list)
{
	int len;

	len = ft_lstdlen(list) - 1;
	if (len > 0)
		while (len--) {
			if (ft_strcmp(list->content , list->next->content) >= 0)
				return 0;
			list = list->next;
		}
	return 1;

}