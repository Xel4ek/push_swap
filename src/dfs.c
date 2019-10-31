#include "push_swap.h"
#include <stdio.h>

int ft_all_operations(t_list **a, t_list **b){

	return 0;
}

/*
int dfs_with_max_len(t_list **list, t_list **buff, t_list **visited, int max_steps){
	char *string;
	int len1;
	int len2;
	int result;
	enum Operations operations;
	operations = SA;
	int flag = 0;
	char *temp;
	if (max_steps < 1)
		return 0;
		len1 = ft_lstdlen(*list);
		len2 = ft_lstdlen(*buff);
		string = ft_lstd_to_str(*list, *buff, 8192, 0, len1, len2);
//		printf("%s len :%d len :%d\n ",string, len1, len2);
		if (!ft_is_str_in_lstd(string, *visited)) {
			ft_lstd_push_front(visited, ft_lstdnew(string, ft_strlen(string) + 1));
			while (1) {
				flag++;
				len1 = ft_lstdlen(*list);
				len2 = ft_lstdlen(*buff);
				if (operations == PA && len2 == 0) {
					operations++;
					continue;
				}
				if (operations == PB && len1 == 0) {
					operations++;
					break;
				}
//			if (operations == PA) {
//				len2--;
//				len1++;
//			} else if (operations == PB) {
//				len2++;
//				len1--;
//			}
				ft_operations(operations, list, buff);
				if (ft_lstdlen(*buff) == 0 && is_sorted(*list)) {
					temp = ft_lstd_to_str(*list, *buff, 8192, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
					printf("!{%s} \n", temp);
					printf("{%s} ", string);
					printf("!operation : %d ", operations);
					printf("!max_step : %d \n", max_steps);
					return 1;
				}

//			printf("*");
				if (result = dfs_with_max_len(list, buff, visited, max_steps - 1)) {
					printf("{%s} ", string);
					printf("s!operation : %d ", operations);
					printf("s!max_step : %d \n", max_steps);

					return result + 1;
				}
				else{
					if (operations / 3 == 0)
						ft_operations(operations, list, buff);
					if (operations / 3 == 1)
						ft_operations(operations + 3, list, buff);
					if (operations / 3 == 2)
						ft_operations(operations - 3, list, buff);
					if (operations == PA)
						ft_operations(PB, list, buff);
					if (operations == PB)
						ft_operations(PA, list, buff);

				}

				if (operations == PB)
					break;
				operations++;
			}
//		}
	}
	return 0;
}
 */
int try_add(t_list **list, t_list **buff){
//	if(((t_ps_content *)(*list)->content)->serial > 100)
//		return 0;
	if (((t_ps_content *) (*buff)->content)->serial <= ((t_ps_content *)(*list)->content)->serial &&
		((t_ps_content *) (*buff)->content)->serial >= ((t_ps_content *) (*list)->prev->content)->serial) {
		ft_operations(PA, list, buff);
	}
	else if (((t_ps_content *) (*buff)->content)->serial >=
			 ((t_ps_content *) (*list)->prev->content)->serial &&
			 ((t_ps_content *) (*list)->content)->serial <=
			 ((t_ps_content *) (*list)->prev->content)->serial) {
		ft_operations(PA, list, buff);
		}
	else if (((t_ps_content *) (*buff)->content)->serial <= ((t_ps_content *) (*list)->content)->serial &&
			 ((t_ps_content *) (*list)->content)->serial <= ((t_ps_content *) (*list)->prev->content)->serial) {
		ft_operations(PA, list, buff);

	}
	else
		return 0;
	return 1;
}

#include <stdlib.h>
int bfs(t_list **list, t_list **buff, t_list **visited, t_list **queue){
	int steps;
	int iter;
	int deep;
	t_ps_string *item;
	enum Operations operation;
	char *temp;
	int i;
	char **print;
	char *itoa_ptr;
	int last;
	int len1;
	int len2;
	unsigned  int hash;
	steps = 0;
	item = (t_ps_string*) malloc(sizeof(t_ps_string));
	item->string  = ft_lstd_to_array(*list, *buff, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));
	item->size = len1 + len2 + 1;
	item->queue = (char*)malloc(sizeof(char)*8192);
	item->queue[0] = '+';
	item->queue[1] = 0;
	item->last = -1;

	ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
//	ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
	ft_lstd_push_back(&visited[ft_hash_int(item->string,len1 + len2 + 1, MAX_HASH_SIZE)], ft_lstdnew(item, sizeof(*item)));
	iter = 0;
	deep = 0;
	while (iter < 150000 && *buff && *queue) {

		ft_lstd_del_2(list);
		ft_lstd_del_2(buff);
		item = NULL;
		item = (t_ps_string*)((*queue)->content);
		ft_array_to_lstd(item->string, item->size, list, buff);
//		ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
		temp = (char*)malloc(sizeof(char)*8192);
		ft_strcpy(temp, item->queue);
		ft_lstd_pop_front(queue);

		if (try_add(list, buff)) {
			steps += ft_strlen(temp) / 2;
			iter++;
			print = ft_strsplit(temp,' ');
			i = ft_strlen(temp) / 2;
			while (i>= 0) {
				if (!ft_strcmp("+",print[i]))
					printf("pa\n");
				else if (!ft_strcmp(print[i],"3"))
					printf("ra\n");
				else if (!ft_strcmp(print[i],"4"))
					printf("rb\n");
				else if (!ft_strcmp(print[i],"5"))
					printf("rr\n");
				else if (!ft_strcmp(print[i],"6"))
					printf("rra\n");
				else if (!ft_strcmp(print[i],"7"))
					printf("rrb\n");
				else if (!ft_strcmp(print[i],"8"))
					printf("rrr\n");
				--i;
			}

			ft_memdel((void**)&print);
//			ft_memdel((void**)&temp);
			ft_lstd_del(queue);
			ft_hash_del(visited, MAX_HASH_SIZE);
			item = (t_ps_string*) malloc(sizeof(t_ps_string));
			item->queue = (char*)malloc(sizeof(char)*8192);
			item->queue[0] = '+';
			item->queue[1] = 0;
			item->last = -1;

		//	item->string  = ft_lstd_to_str(*list, *buff, 8192, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
			item->string  = ft_lstd_to_array(*list, *buff, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));
			item->size = len1 + len2 + 1;
			ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
//			ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
			ft_lstd_push_back(&visited[ft_hash_int(item->string,len1 + len2 + 1, MAX_HASH_SIZE)], ft_lstdnew(item, sizeof(*item)));
//			ft_memdel((void**)&(item));
		}
		else
			{
			operation = RRR;
			while (operation > SS) {
				if (last !=-1 && operation / 3 == last / 3)
				{
					--operation;
					continue;
				}
				if (last !=-1 && operation % 3 == last % 3)
				{
					--operation;
					continue;
				}
				ft_operations(operation, list, buff);
				item = (t_ps_string*) malloc(sizeof(t_ps_string));
				item->string  = ft_lstd_to_array(*list, *buff, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));

				if ( 0 == ft_is_array_in_lstd(item->string,len1 + len2 + 1, visited[(hash = ft_hash_int(item->string,len1 + len2 + 1, MAX_HASH_SIZE))])) {
					item->queue = (char*)malloc(sizeof(char)*8192);
					item->last = operation;
					ft_strcpy(item->queue, temp);
					ft_strcat(item->queue, " ");
					item->size = len1 + len2 + 1;
					itoa_ptr  = ft_itoa(operation);
					ft_strcat(item->queue,itoa_ptr);
					ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
//					ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
					 ft_lstd_push_back(&visited[hash], ft_lstdnew(item, sizeof(*item)));
				}
				if (operation / 3 == 0)
					ft_operations(operation, list, buff);
				else if (operation / 3 == 1)
					ft_operations(operation + 3, list, buff);
				else if (operation / 3 == 2)
					ft_operations(operation - 3, list, buff);
//				ft_memdel((void**)&(item));
			--operation;
			++deep;
			}
			++iter;
	}

	}
	printf("iter :%d\n",iter);
	return steps;
}
