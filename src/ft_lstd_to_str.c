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