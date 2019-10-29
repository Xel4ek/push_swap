#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main(int argc, char **argv) {
	t_list *list;
	t_list *buff;
	t_list *visited;
	t_list *queue;
	int size;
	int *vector;
	int value;

	char *string;
	int max_steps;
	int deep;
	int p;
//		char str[]="16 59 19 52 84 17 86 109 108 87 85 49 43 101 1 63 9 92 106 81 77 94 105 113 69 89 110 8 31 48 67 56 34 78 61 96 53 88 74 76 7 95 66 14 2 20 73 29 57";
	char *str;
	str = ft_strnew(2);
	str[0] = 0;
	if (argc > 1) {
		p = 1;
		while (p < argc) {
			if (p != 1)
				str = ft_strjoin(" ", str);
			str = ft_strjoin(argv[p++],str);
		}
	}else
		return 0;
	list = NULL;
	buff = NULL;
	visited = NULL;
	queue = NULL;
	deep = 0;
	list = ft_strsplit_to_lstd(str);
	size = ft_strsplit_to_inttab(&vector, str);

//	printf("we get %d numbers\n",size);
	int steps;
//	ft_operations(PB,&list, &buff);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
	int i = 0;
//	while (i < size)
//		printf(" %2d", vector[i++]);
	ft_quick_sort(vector, vector + size -1);
//	printf("\n");
//	i = 0;
//	while (i < size)
//		printf(" %2d", vector[i++]);
//	i = 0;
//	printf("\n");
//	while (i < size)
//		printf(" %2d",i++);
//	printf("\n--------------------------------------\n");
	i = 0;
	int j;

	while (i < size){
		j = 0;
		while (j < size) {
			if (vector[j] == ((t_ps_content *) list->content)->value)
				((t_ps_content *) list->content)->serial = j;
		++j;
		}
		list= list->next;
		++i;
	}
	ft_memdel((void**)&vector);
//	ft_operations(SA, &list, &buff);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
//	int i = 0;
//	int len = ft_lstdlen(list);
int m;
	i = size;
	int take_it = 0;
	while (i--) {

		max_steps = longes_subsequence(list, &buff);

		if (max_steps > take_it)
		{
			take_it = max_steps;
//			printf("we find %d\n",i);
//			ft_lstditer_two(list, buff, &ft_lstprint);
			int k;

			j = size;
			while(j--) {
				((t_ps_content *) list->content)->operation = -1;
				list=list->next;
			}
			k = take_it;
			while(k--){
				m = size;
				while(m--) {
					if (((t_ps_content *) list->content)->serial == ((t_ps_content *) buff->content)->value)
						((t_ps_content *) list->content)->operation = FREEZE;
					list = list->next;
					}
				buff = buff->next;
			}
//			printf("--------------------------------------\n");
//			printf("steps: %d\n", max_steps);
		}
		ft_lstd_del(&buff);
		list = list->next;
	}
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");

//	ft_lstditer_two(list, buff, &ft_lstprint3);
//	printf("--------------------------------------\n");
	i = size;
	int move;


	steps = 0;
	i = size;
	while (i--) {
		if (((t_ps_content *) list->content)->operation != FREEZE) {
//			move = 1;
//			if (!buff) {
				ft_operations(PB, &list, &buff);
				printf("pb\n");
				//			else {
//				while (move) {
//					move = 0;
//					if (((t_ps_content *) list->content)->serial >= ((t_ps_content *) buff->content)->serial &&
//						((t_ps_content *) list->content)->serial <= ((t_ps_content *) buff->prev->content)->serial) {
//						ft_operations(PB, &list, &buff);
//
//					} else if (((t_ps_content *) list->content)->serial >= ((t_ps_content *) buff->content)->serial &&
//							   ((t_ps_content *) buff->content)->serial >=
//							   ((t_ps_content *) buff->prev->content)->serial) {
//						ft_operations(PB, &list, &buff);
//
//					}
////				else if (ft_strcmp2((*list)->content, (*buff)->prev->content) <= 0 &&
//					else if (((t_ps_content *) list->content)->serial <=
//							 ((t_ps_content *) buff->prev->content)->serial &&
//							 //						 ft_strcmp2((*buff)->content, (*buff)->prev->content) >= 0) {
//							 ((t_ps_content *) buff->content)->serial >=
//							 ((t_ps_content *) buff->prev->content)->serial) {
//						ft_operations(PB, &list, &buff);
//
//					} else {
//						ft_operations(RB, &list, &buff);
//						move = 1;
//						++steps;
//					}
//				}
//			}
		}
		else {
			ft_operations(RA, &list, &buff);
			printf("ra\n");
		}
		++steps;
	}
//	printf("--------------------------------------\n");
//	ft_lstditer_two(list, buff, &ft_lstprint3);
//	printf("--------------------------------------\n");
//	printf("steps: %d\n", steps);
	steps += bfs(&list, &buff, &visited, &queue);
	ft_lstd_del(&visited);
	ft_lstd_del_3(&queue);
//	ft_lstditer_two(list, buff, &ft_lstprint3);
//	printf("--------------------------------------\n");
//	printf("steps: %d\n", steps);

//	char *test;
//	test = ft_lstd_to_str(list, buff, 250, 0, ft_lstdlen(list),ft_lstdlen(buff));
//	printf("%s\n", test);
//	ft_lstditer_two(list, buff, &ft_lstprint3);
	ft_lstd_del_2(&list);
	ft_lstd_del_2(&buff);
//	ft_str_to_lstd(test, &list, &buff);

//	ft_lstditer(queue, &ft_lstprint2);
	printf("steps: %d\n", steps);
	return 0;
}