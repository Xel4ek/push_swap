#include "libft.h"
#include "push_swap.h"

void ft_hash_del(t_list **hash_table, unsigned size){
	while (size--)
		ft_lstd_del_3(&hash_table[size]);
	}