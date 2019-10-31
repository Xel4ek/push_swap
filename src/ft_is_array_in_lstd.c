#include "push_swap.h"


size_t ft_is_array_in_lstd(const int *tab, const int len, t_list *list){
	t_list *ptr;
	int i;
	ptr = NULL;
	if (list) {
		if (list != list->next){
			while (list && ptr != list->next) {
				if (!ptr)
					ptr = list;
				if(!ft_memcmp(((t_ps_string *) list->content)->string, tab, len*sizeof(int)))
					return 1;
				list = list->next;
				}
		} else {
			if(!ft_memcmp(((t_ps_string *) list->content)->string, tab, len*sizeof(int)))
				return 1;
		}
	}
	return 0;
}