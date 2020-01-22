/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs_@.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:43 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 15:19:44 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int try_add(t_list **list, t_list **buff){
	if (((t_ps_content *) (*buff)->content)->serial <= ((t_ps_content *)(*list)->content)->serial &&
		((t_ps_content *) (*buff)->content)->serial >= ((t_ps_content *) (*list)->prev->content)->serial) {
		ft_operations(PA, list, buff);
	} else if (((t_ps_content *) (*buff)->content)->serial <= ((t_ps_content *) (*list)->content)->serial &&
			   ((t_ps_content *) (*list)->content)->serial <= ((t_ps_content *) (*list)->prev->content)->serial) {
		ft_operations(PA, list, buff);

	}
//				else if (ft_strcmp2((*list)->content, (*buff)->prev->content) <= 0 &&
	else if (((t_ps_content *) (*buff)->content)->serial >=
			 ((t_ps_content *) (*list)->prev->content)->serial &&
			 //						 ft_strcmp2((*buff)->content, (*buff)->prev->content) >= 0) {
			 ((t_ps_content *) (*list)->content)->serial <=
			 ((t_ps_content *) (*list)->prev->content)->serial) {
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
	steps = 0;
	item = (t_ps_string*) malloc(sizeof(t_ps_string));
	item->string  = ft_lstd_to_str(*list, *buff, 250, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
	item->queue = (char*)malloc(sizeof(char)*500);
	item->queue[0] = '+';
	item->queue[1] = 0;
	ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
	ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
	iter = 0;
	deep = 0;
	while (iter < 70000 && *buff && *queue) {
		item = (t_ps_string*)(*queue)->content;
		ft_lstd_del(list);
		ft_lstd_del(buff);
		ft_str_to_lstd(item->string, list, buff);
		temp = (char*)malloc(sizeof(char)*500);
		ft_strcpy(temp, item->queue);
		ft_lstd_pop_front(queue);

		if (try_add(list, buff)) {
//			steps += 1;
			steps += ft_strlen(temp) / 2;
			iter++;
			print = ft_strsplit(temp,' ');
			i = ft_strlen(temp) / 2;
			while (i>= 0) {
				if (!ft_strcmp(print[i],"+"))
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

			ft_lstd_del(queue);
			ft_lstd_del(visited);
			item = (t_ps_string*) malloc(sizeof(t_ps_string));
			item->queue = (char*)malloc(sizeof(char)*500);
			item->queue[0] = '+';
			item->queue[1] = 0;
			item->string  = ft_lstd_to_str(*list, *buff, 250, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
			ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
			ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
		}
		else
			{
			operation = RA;
			while (operation < PA) {
//				if (operation == SA || operation == SS){
//					++operation;
//					continue;
//				}
				ft_operations(operation, list, buff);
		//		temp = item->queue;
				item = (t_ps_string*) malloc(sizeof(t_ps_string));
				item->string  = ft_lstd_to_str(*list, *buff, 250, 0, ft_lstdlen(*list), ft_lstdlen(*buff));
				if (!ft_is_str_in_lstd(item->string, *visited)) {
					item->queue = (char*)malloc(sizeof(char)*500);
					ft_strcpy(item->queue, temp);
					ft_strcat(item->queue, " ");
					ft_strcat(item->queue, ft_itoa(operation));
					ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
					ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
				}if (operation / 3 == 0)
					ft_operations(operation, list, buff);
				if (operation / 3 == 1)
					ft_operations(operation + 3, list, buff);
				if (operation / 3 == 2)
					ft_operations(operation - 3, list, buff);
			++operation;
			++deep;
			}
//			ft_operations(RA, list, buff);
			++iter;
		}
	}

	return steps;
}

int bfs2(t_list **list, t_list **buff, t_list **visited, t_list **queue){
	int steps;
	int iter;
	int deep;
	t_ps_string *item;
	enum Operations operation;
	char *temp;
	int i;
	char **print;
	int len1;
	int len2;
	int score;
	int weight;
	steps = 0;
	item = (t_ps_string*) malloc(sizeof(t_ps_string));
	item->string  = ft_lstd_to_str(*list, *buff, 250, 0, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));
	item->queue = (char*)malloc(sizeof(char)*500);
	item->queue[0] = '+';
	item->queue[1] = 0;
	score = 0;
	while(len1--)
	{
		if (((t_ps_content*)(*list)->content)->serial > ((t_ps_content*)(*list)->next->content)->serial)
			score += 5;
		else
			score -=5;
		*list = (*list)->next;
	}
	while(len2--)
	{
		if (((t_ps_content*)(*buff)->content)->serial < ((t_ps_content*)(*buff)->next->content)->serial)
			score += -1;
		*buff = (*buff)->next;
	}

	item->weight = score;
	ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
	ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
	iter = 0;
	deep = 0;
	weight = 0;
	while (iter < 307 && !is_sorted(*list)) {
		item = (t_ps_string*)(*queue)->content;
		ft_lstd_del(list);
		ft_lstd_del(buff);
		ft_str_to_lstd(item->string, list, buff);
		temp = (char*)malloc(sizeof(char)*500);
		ft_strcpy(temp, item->queue);
		score = item->weight;
		ft_lstd_pop_front(queue);

		if (weight < score) {
			weight = score;
			printf("weight %d\n",weight);
//			steps += 1;
			steps += ft_strlen(temp) / 2;
			iter++;
			print = ft_strsplit(temp,' ');
			i = ft_strlen(temp) / 2 - 1;
			while (i>= 0) {
				if (!ft_strcmp(print[i],"+"))
					printf("+\n");
				else if (!ft_strcmp(print[i],"0"))
					printf("sa\n");
				else if (!ft_strcmp(print[i],"1"))
					printf("sb\n");
				else if (!ft_strcmp(print[i],"2"))
					printf("ss\n");
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
				else if (!ft_strcmp(print[i],"9"))
					printf("pa\n");
				--i;
			}

			ft_lstd_del_3(queue);
			ft_lstd_del_3(visited);
			item = (t_ps_string*) malloc(sizeof(t_ps_string));
			item->queue = (char*)malloc(sizeof(char)*500);
			item->queue[0] = '+';
			item->queue[1] = 0;

			item->string  = ft_lstd_to_str(*list, *buff, 250, 0, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));
			score = 0;
			while(len1--)
			{
				if (((t_ps_content*)(*list)->content)->serial > ((t_ps_content*)(*list)->next->content)->serial)
					score += 5;
				else
					score -=5;
				*list = (*list)->next;
			}
			while(len2--)
			{
				if (((t_ps_content*)(*buff)->content)->serial < ((t_ps_content*)(*buff)->next->content)->serial)
					score += -1;
				*buff = (*buff)->next;
			}
			item->weight = score;
			ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
			ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
		}
		else
		{
			operation = PB;
			while (operation >= SA) {
				if (operation == PA && ft_lstdlen(*buff) == 0){
					--operation;
					continue;
				}
				if (operation == PB && ft_lstdlen(*list) == 0){
					--operation;
					continue;
				}
				ft_operations(operation, list, buff);
				//		temp = item->queue;
				item = (t_ps_string*) malloc(sizeof(t_ps_string));
				item->string  = ft_lstd_to_str(*list, *buff, 250, 0, (len1 = ft_lstdlen(*list)), (len2 = ft_lstdlen(*buff)));
				if (!ft_is_str_in_lstd(item->string, *visited)) {
					item->queue = (char*)malloc(sizeof(char)*500);
					ft_strcpy(item->queue, temp);
					ft_strcat(item->queue, " ");
					ft_strcat(item->queue, ft_itoa(operation));
					score = 0;
					while(len1--)
					{
						if (((t_ps_content*)(*list)->content)->serial > ((t_ps_content*)(*list)->next->content)->serial)
							score += 5;
						else
							score -=5;
						*list = (*list)->next;
					}
					while(len2--)
					{
						if (((t_ps_content*)(*buff)->content)->serial < ((t_ps_content*)(*buff)->next->content)->serial)
							score += -1;
						*buff = (*buff)->next;
					}

					item->weight = score;
					ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
					ft_lstd_push_back(visited, ft_lstdnew(item, sizeof(*item)));
				}if (operation / 3 == 0)
					ft_operations(operation, list, buff);
				if (operation / 3 == 1)
					ft_operations(operation + 3, list, buff);
				if (operation / 3 == 2)
					ft_operations(operation - 3, list, buff);
				if (operation == PA)
					ft_operations(PB, list, buff);
				if (operation == PB)
					ft_operations(PA, list, buff);

				--operation;
				++deep;
			}
//			ft_operations(RA, list, buff);
			++iter;
		}
	}

	return steps;
}
