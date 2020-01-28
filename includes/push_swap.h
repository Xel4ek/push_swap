/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:53 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 17:32:56 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <sys/types.h>
#include <sys/stat.h>
#include "libft.h"

# define MAX_HASH_SIZE 1024
# define MAX_QUEUE_SIZE 4096
enum Operations{
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	PA,
	PB,
	FREEZE
};

typedef struct s_rotate_data{
	int rr;
	int ra;
	int rb;
	int summ;
}				t_rotate_data;

typedef struct s_ps_contetnt{
	int value;
	int operation;
	int serial;
	int content_size;
	int content;

}				t_ps_content;

typedef  struct s_ps_string{
	int			*string;
	int			size;
	char		*queue;
//	int			last;
	int			queue_len;
}				t_ps_string;

void					ft_lstprint(t_list *list);
void					ft_lstprint2(t_list *list);
t_list					*ft_strsplit_to_lstd(const char *string);

int						is_sorted(t_list *list);
//char					*ft_lstd_to_str(t_list *list1, t_list *list2, size_t size1, size_t size2, size_t len1, size_t len2);
void					ft_lstditer_reduce(t_list *list, int *n, void (*f)());
size_t					ft_is_str_in_lstd(char *string, t_list *list);
int						ft_lstd_swap(t_list **list);
int						ft_operation(char *string, t_list **a, t_list **b);
int						ft_sort_lstd(t_list **list, t_list **buff);
int						dfs_with_max_len(t_list **list, t_list **buff, t_list **visited, int max_steps);
char					*ft_lstd_to_str(t_list *list1, t_list *list2, int size1, int size2, int len1, int len2);
int						ft_operations(enum Operations operation, t_list **a, t_list **b);
//int					ft_quick_sort(t_list **list, t_list **buff, char *pivot);
int bfs(t_list **list, t_list **buff, t_list **visited,  t_list **queue);
int longest_subsequence_lstd(const t_list *list, t_list **buff);
t_ps_content *ft_ps_new_content(char *string);
int ft_strsplit_to_inttab(int **vector, char *string);
void	ft_lstprint3(t_list *list);
void	ft_lstd_del_2(t_list **list);
void	ft_lstd_del_3(t_list **list);
int *ft_lstd_to_array(t_list *list1, t_list *list2, int len1, int len2);
void ft_array_to_lstd(const int *tab, const int len, t_list **list1, t_list **list2);
unsigned int ft_hash_int(const int *tab, unsigned int len,const unsigned int size);
size_t ft_is_array_in_lstd(const int *tab, const int len, t_list *list);
t_ps_content *ft_ps_new_content_int(int tab);
void	ft_lstprint4(t_list *list);
void	ft_lstd_del_4(t_list **list);
int 	ft_sort_ratio(const int *tab, size_t size);
void ft_merge_sort_by(t_list **list,  int (*f)());
void	ft_lstprint5(t_list *list);
void ft_queue_sort(t_list **source);
void ft_circle(t_list *list);
int a_star(t_list **list, t_list **buff, t_list **visited, t_list **queue);
void sort_lstds(t_list **list, t_list **buff);
void ft_move_stack(t_list *list);
int ft_sequence_prepear(t_list **list);
void ft_first_step(t_list **list, t_list **buff, int take_it);
t_list *ft_str_like_lstd(char *string);
char *ft_get_str(int argc, char **argv);
void ft_bfs_sort(t_list **list);
char *ft_get_str_and_options(int argc, char **argv, int *options);
int ft_duplicate_finder(char *string);
int ft_overloaded_checker(char *string);
int ft_action_checker(char *string);
int ft_get_data(t_list **list, int argc, char **argv);
int ft_aply_actions(t_list **list, int option);
#endif
