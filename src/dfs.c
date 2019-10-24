#include "push_swap.h"
#include <stdio.h>

int ft_all_operations(t_list **a, t_list **b){

	return 0;
}


int dfs_with_max_len(t_list **list, t_list **buff, int max_steps){
	char *string;
	int len1;
	int len2;
	enum Operations operations;
	operations = SA;
	int flag = 0;
	len1 = ft_lstdlen(*list);
	len2 = ft_lstdlen(*buff);
//	string = ft_lstd_to_str(list, buff, size, 0, len1, len2);
//	ft_lstd_push_front(visited, ft_lstdnew(string, ft_strlen(string) + 1));
	if(max_steps > 0) {
		while (1) {
			flag++;
			if (operations == PA && len2 == 0){
				operations++;
				continue;
			}
			if (operations == PB && len1 == 0){
				operations++;
				continue;
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
				ft_lstditer_two(*list, *buff, &ft_lstprint);
				printf("s!operation : %d %d\n", len1, len2);
				printf("s!max_step : %d\n", max_steps);
				return 1;
			}
//			printf("*");
			if (dfs_with_max_len(list, buff, max_steps - 1)) {
				printf("operation : %d %d\n", len1, len2);
				printf("max_step : %d\n", max_steps);
				return 1;
			}
			if (operations == PB)
				break;
			operations++;
		}
	}
	return 0;
}
