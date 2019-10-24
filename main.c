#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main() {
	t_list *list;
	t_list *buff;
	t_list *wtf;
	int value;
	char str[]="8 5 6 3 1 2";
	int max_steps;
	list = NULL;
	buff = NULL;
	wtf = NULL;
	list = ft_strsplit_to_lstd(str);

//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
//	max_steps = ft_sort_lstd(&list, &buff);
//	printf("steps: %d\n", max_steps);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
//
//	list = ft_strsplit_to_lstd(str);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	ft_operations(PB, &list, &buff);
	value = dfs_with_max_len(&list, &buff, 6);
	printf("result: %d\n", value);
	printf("--------------------------------------\n");
	ft_lstditer_two(list, buff, &ft_lstprint);
	printf("-------------------------------------\n");
//	ft_lstditer(wtf,&ft_lstprint2);

	return 0;
}