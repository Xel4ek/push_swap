#include "push_swap.h"
#include <stdlib.h>

int *ft_lstd_to_array(t_list *list1, t_list *list2, int len1, int len2){
	int *ptr;
	int *temp;

	if(!(ptr = (int*)malloc(sizeof(int)*(len1 + len2 + 1))))
		return NULL;
	temp = ptr;
	int i;
	i = 0 ;
	while (len1) {
		len1--;
		*temp++ = ((t_ps_content*)list1->content)->serial;
		list1 = list1->next;
	}
	*temp++ = -1;
	while (len2) {
		len2--;
		*temp++ = ((t_ps_content*)list2->content)->serial;
		list2 = list2->next;
	}
	return ptr;
}