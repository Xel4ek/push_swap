#include "push_swap.h"
#include <stdlib.h>

t_list		*ft_strsplit_to_lstd(const char *string)
{
	t_list	*list;
//	int		value;
	char 	**tab;
	int 	size;
	t_ps_content *item;


	list = NULL;
	if (!string)
		return (NULL);
	tab = ft_strsplit(string, ' ');
	size = 0;
	while (tab[size])
	{
//			value = ft_atoi(tab[size]);
			item = ft_ps_new_content(tab[size]);
			ft_lstd_push_front(&list, ft_lstdnew(item, sizeof(*item)));
//			list->value = ft_atoi(tab[size]);
//			list->operation = -1;
			ft_memdel((void**)&tab[size]);
			size++;
	}
	ft_memdel((void**)&tab);
	return (list);
}
