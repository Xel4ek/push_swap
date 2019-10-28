#include "push_swap.h"

int	ft_lstditer_reduce_2(t_list *list, char *string, int (*f)())
{
	t_list *ptr;

	ptr = NULL;
	if (*f) {
		if (list) {
			if (list != list->next)
				while (list && ptr != list->next) {
					if (!ptr)
						ptr = list;
					if(!(*f)(((t_ps_string*) list->content)->string, string))
						return 1;
					list = list->next;
				}
			if(!(*f)(((t_ps_string*) list->content)->string, string))
				return 1;
		}
	}
	return 0;
}

size_t ft_is_str_in_lstd(char *string, t_list *list){
	return ft_lstditer_reduce_2(list, string, ft_strcmp2);
}