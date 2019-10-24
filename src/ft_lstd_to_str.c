#include "push_swap.h"
#include <stdlib.h>

char *ft_lstd_to_str(t_list *list1, t_list *list2, int size1, int size2, int len1, int len2){
	char *ptr;
	char *temp;

	if(!(ptr = (char*)malloc(size1 + size2 + len1 + len2 + 2)))
		return NULL;
	*ptr = 0;
	temp = ptr;
	while (len1) {
		len1--;
		temp = ft_strcat_end(temp, list1->content);
		*temp++ = ' ';
		*temp = 0;
		list1 = list1->next;
	}
	*temp++ = '/';
	*temp = 0;
	while (len2) {
		len2--;
		*temp++ = ' ';
		*temp = 0;
		temp = ft_strcat_end(temp, list2->content);
		list2 = list2->next;
	}
	*temp = 0;
	return ptr;
}

void ft_str_to_lstd(char *string,t_list **list1, t_list **list2){
	char **tab;
	int i;
	*list1 = NULL;
	*list2 = NULL;
	tab = ft_strsplit(string, ' ');
	i = 0;
	while (tab[i] && ft_strcmp2(tab[i], "/")) {
		ft_lstd_push_back(list1, ft_lstdnew(tab[i], 1 + ft_strlen(tab[i])));
		i++;
	}
	i++;
	while (tab[i]) {
		ft_lstd_push_back(list2, ft_lstdnew(tab[i], 1 +  ft_strlen(tab[i])));
		i++;
	}
}