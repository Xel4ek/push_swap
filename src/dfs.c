#include "push_swap.h"
#include <stdio.h>

int ft_all_operations(t_list **a, t_list **b){

	return 0;
}


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
		string = ft_lstd_to_str(*list, *buff, 128, 0, len1, len2);
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
					temp = ft_lstd_to_str(*list, *buff, 8, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
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

int bfs(t_list **list, t_list **buff, t_list **visited, t_list **queue, int *deep){
	int len1;
	int len2;
	char *string;
	char *u;
	enum Operations operations;

	len1 = ft_lstdlen(*list);
	len2 = ft_lstdlen(*buff);
	string = ft_lstd_to_str(*list, *buff, 128, 0, len1, len2);
	ft_lstd_push_front(queue, ft_lstdnew(string, ft_strlen(string) + 1));
//	if 	(!ft_is_str_in_lstd(string, *visited)) {
//		ft_lstd_push_front(visited, ft_lstdnew(string, ft_strlen(string) + 1));
//	}
	while (*queue && (*deep) >= 0)
	{
		printf("%d\n",*deep);
		u = (*queue)->content;
		ft_lstd_push_back(visited, ft_lstdnew(u, ft_strlen(string) + 1));
		ft_str_to_lstd(u,list, buff);
		operations = SA;
		(*deep)--;
		while (1){
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
			ft_operations(operations, list, buff);
			if (ft_lstdlen(*buff) == 0 && is_sorted(*list)) {
//				temp = ft_lstd_to_str(*list, *buff, 8, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
//				printf("!{%s} \n", temp);
//				printf("{%s} ", string);
//				printf("!operation : %d ", operations);
//				printf("!max_step : %d \n", max_steps);
//				ft_lstditer(*visited, &ft_lstprint2);
				printf("!!!!!!!!!!!!!!!!!!!!\n");
				return 1;
			}

			len1 = ft_lstdlen(*list);
			len2 = ft_lstdlen(*buff);
			string = ft_lstd_to_str(*list, *buff, 128, 0, len1, len2);
			if (!ft_is_str_in_lstd(string, *visited)) {
				ft_lstd_push_back(queue, ft_lstdnew(string, ft_strlen(string) + 1));
			}
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

			if (operations == PB)
				break;
			operations++;
		}
		ft_lstd_pop_front(queue);
		}
		return 0;
}
