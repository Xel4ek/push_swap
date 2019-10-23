#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main() {
	t_list *list;
	t_list *buff;
	t_list *visizted;
	char str[]="8 7 6 5 4 3 2 1";
	int tmp[] = {123};
	int size;
	list = NULL;
	buff = NULL;
	visizted = NULL;
	list = ft_strsplit_to_lstd(str);

	ft_lstditer_two(list, buff, &ft_lstprint);
	printf("--------------------------------------\n");
//	ft_lstd_push_front(&visizted, ft_lstdnew(ft_lstd_to_str(list, buff, 8, 0, 8,0),
//			18));
//	ft_lstd_swap(&list);
//	ft_lstd_push_front(&visizted, ft_lstdnew(ft_lstd_to_str(list, buff, 8, 0, 8,0),
//											 18));
//	ft_lstditer(visizted, &ft_lstprint);
//	printf("%d\n",ft_is_str_in_lstd("1 2 3 4 5 6 7 8 /", visizted));
	ft_operation("rra", &list, &buff);
//	printf("ans: %d\n", !ft_strcmp("rr", "rra"));

	ft_lstditer_two(list, buff, &ft_lstprint);
	return 0;
}