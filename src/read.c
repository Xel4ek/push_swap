#include "push_swap.h"
#include <stdlib.h>

t_list		*ft_strsplit_to_lstd(char const *string)
{
	t_list	*list;
	int		value;
	char 	**tab;
	int 	size;



	list = NULL;
	if (!string)
		return (NULL);
	tab = ft_strsplit(string, ' ');
	size = 0;
	while (tab[size])
	{
			value = ft_atoi(tab[size]);
			ft_lstd_push_front(&list, ft_lstdnew(&value, sizeof(value)));
			ft_memdel((void**)&tab[size]);
			size++;
	}
//	ft_memdel((void**)&tab);
	return (list);
}
