#include "push_swap.h"
#include <stdlib.h>

void  ft_array_to_lstd(int *tab, int len, t_list **list1, t_list **list2){
	int i;
	t_ps_content *item;
	*list1 = NULL;
	*list2 = NULL;
	i = 0;
//	item = (t_ps_content *)malloc(sizeof(t_ps_content));
	while (tab[i] != -1) {
		item = (t_ps_content *)malloc(sizeof(t_ps_content));
		item->value =  tab[i];
		item->operation = -1;
		item->content_size = sizeof(int);
		item->serial = tab[i];
		item->content =  tab[i];
		ft_lstd_push_back(list1, ft_lstdnew(item, sizeof(t_ps_content)));
		ft_memdel((void**)&item);
		i++;

	}
	i++;
	while (i < len) {
		item = (t_ps_content *)malloc(sizeof(t_ps_content));
		item->value =  tab[i];
		item->operation = -1;
		item->content_size = sizeof(int);
		item->serial = tab[i];
		item->content =  tab[i];
		ft_lstd_push_back(list2, ft_lstdnew(item, sizeof(t_ps_content)));
		ft_memdel((void**)&item);
		i++;
	}
 }