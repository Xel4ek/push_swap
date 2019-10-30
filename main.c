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
//		char str[]="435 601 440 938 294 893 256 913 41 229 79 71 125 271 999 453 118 631 494 966 580 264 975 347 891 699 546 162 315 592 887 562 552 269 751 717 660 356 763 16 520 617 342 364 103 770 198 244 154 745 882 60 485 622 750 573 557 936 405 743 439 697 974 980 542 252 470 259 789 116 341 297 991 985 193 849 987 293 224 728 588 326 658 479 110 707 393 111 305 106 124 959 692 616 139 380 295 200 316 75 478 597 488 101 1 492 194 954 255 333 840 729 664 81 357 351 935 716 23 998 105 257 790 727 863 777 149 997 917 648 152 865 847 132 864 656 926 191 51 140 937 774 779 378 9 423 786 226 408 579 217 215 99 471 126 55 195 633 531 862 433 628 480 708 680 412 421 164 606 964 600 13 908 545 452 526 705 982 824 77 209 304 469 714 857 722 153 328 876 962 549 457 54 340 795 736 553 403 911 102 402 322 464 20 586 640 923 957 242 693 739 463 171 300 128 687 912 796 889 371 788 844 563 250 682 495 98 760";
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
//				if(buff && ((t_ps_content*)(buff->content))->serial > size / 2) {
					ft_operations(PB, &list, &buff);
					printf("pb\n");
					steps++;
//				}else
//				{
//					ft_operations(PB, &list, &buff);
//					ft_operations(RRB, &list, &buff);
//
//					printf("pb\nrrb\n");
//					steps++;
//					steps++;
//				}
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
	printf("Vertex %d\n", ft_lstdlen(visited));
	printf("steps: %d\n", steps);
	ft_lstd_del(&visited);
	ft_lstd_del_3(&queue);
	return 0;
}