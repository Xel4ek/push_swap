#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main() {
	t_list *list;
	char str[]="1 2 3 4 5 6 7 8 10 11 -1 0";
	int tmp[] = {123};

	list = ft_strsplit_to_lstd(str);
//	ft_lstditer(list, &ft_lstprint);
//	printf("list size: %ld", ft_lstdlen(list));
//	ft_lstd_push_front(&list, ft_lstdnew(tmp,sizeof(tmp)));
	ft_lstditer(list, &ft_lstprint);
//	ft_lstddel(&list);
	return 0;
}