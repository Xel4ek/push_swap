#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv){
	int i;
	int value;
	size_t len;
	t_list *list;

	list = NULL;
	i = argc;
	if (argc > 1){
		while (i-- > 1) {
//			printf("%s\n",argv[i]);
			value = ft_atoi(argv[i]);
//			printf("%d\n",value);
			ft_lstd_push_front(&list, ft_lstdnew(&value, sizeof(value)));
		}
		ft_lstditer(list, &ft_lstprint);
		printf("\nreduce: %d", is_sorted(list));
		ft_lstddel(&list);
	}


	return (0);

}