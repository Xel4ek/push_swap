#include "push_swap.h"

int ft_operation(char *string, t_list **a, t_list **b)
{
	if (!ft_strcmp(string, "ra")){
		if (*a)
			return ft_lstd_swap(a);
	}
	if (!ft_strcmp(string, "rb")) {
		if (*b)
			return ft_lstd_swap(b);
	}
	if (!ft_strcmp(string, "rr")) {
		if (*a)
			return ft_lstd_swap(a);
		if (*b)
			return ft_lstd_swap(b);
		return  ft_lstd_swap(a) && ft_lstd_swap(b);
	}


	return 1;

}


