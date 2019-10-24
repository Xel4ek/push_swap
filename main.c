#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main() {
	t_list *list;
	t_list *buff;
	t_list *visited;
	t_list *queue;
	int value;
	char str[]="30 2 84 55 12 74 49 97 24 89 42 75 0 72 1 21 96 66 82 59 22 71 3 47 60 99 80 52 32 15 28 34 53 58 38 100 50 6 16 77 67 48 36 87 33 40 92 18 5 70  189 195 181 112 116 196 159 146 167 197 179 164 198 171 176 102 122 183 152 158 126 132 148 106 174 186 128 111 114 191 180 173 135 137 155 157 156 110 190 162 130 119 105 123 104 129 192 182 134 108";
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
	max_steps = ft_sort_lstd(&list, &buff);
	printf("steps: %d\n", max_steps);
	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
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