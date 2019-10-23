#include "push_swap.h"

int	ft_lstditer_reduce_2(t_list *list, char *string, int (*f)())
{
	t_list *ptr;
	int count;

	count = 0;
	ptr = NULL;
	if (*f) {
		if (list) {
			if (list != list->next)
				while (list && ptr != list->next) {
					if (!ptr)
						ptr = list;
							count += (*f)((char*)list->content, string);
					list = list->next;
				}
		}
		count += (*f)((char*)list->content, string);
	}
	return count;
}

size_t ft_is_str_in_lstd(char *string, t_list *list){
	return ft_lstditer_reduce_2(list, string, ft_strcmp);
}