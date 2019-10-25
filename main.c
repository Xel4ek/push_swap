#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main() {
	t_list *list;
	t_list *buff;
	t_list *visited;
	t_list *queue;
	int value;
	char str[]="31 3 40 11 42 97 60 6 35 2 30 57 13 59 23 84";
	char *string;
	int max_steps;
	int deep;
	list = NULL;
	buff = NULL;
	visited = NULL;
	queue = NULL;
	deep = 0;
	list = ft_strsplit_to_lstd(str);
	int steps;

	ft_lstditer_two(list, buff, &ft_lstprint);
	printf("--------------------------------------\n");
//	max_steps = ft_quick_sort(&list,&buff,"35");

	longes_subsequence(list, &buff);
	ft_lstditer_two(list, buff, &ft_lstprint);
	printf("--------------------------------------\n");

	printf("steps: %d\n", max_steps);


//

//	list = ft_strsplit_to_lstd(str);
//	buff = NULL;
//	visited = NULL;
//	steps = 0;
//	while (0 == (value = dfs_with_max_len(&list, &buff, &visited, steps)) && steps <= max_steps) {
//
//		printf("max : %d\n", steps);
//		steps++;
//		ft_lstd_del(&visited);
//	}

//	ft_lstditer(visited, &ft_lstprint2);
//	printf("-------------------------------------\n");
//	printf("max_steps: %d\n", max_steps);
//	printf("result: %d\n", value);
//	printf("--------------------------------------\n");
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("-------------------------------------\n");
//	ft_lstditer(wtf,&ft_lstprint2);
//
//	list = NULL;
//	list = ft_strsplit_to_lstd(str);
//	ft_lstd_push_back(&list, ft_lstdnew("a",2));
//	ft_operations(RRA,&list,&buff);
//	visited = NULL;
//	queue = NULL;
//	buff = NULL;
//	deep = max_steps + 20;
//	value = bfs(&list,&buff, &visited, &queue, &deep);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("result: %d\n", value);
//	printf("deep: %d\n", deep);


	return 0;
}