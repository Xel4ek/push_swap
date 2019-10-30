#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <sys/types.h>
#include <sys/stat.h>
#include "libft.h"


enum Operations{
	SA, //0
	SB, //1
	SS, //2
	RA, //3
	RB, //4
	RR, //5
	RRA, //6
	RRB, //7
	RRR, //8
	PA, //9
	PB,
	FREEZE,
};

typedef struct s_ps_contetnt{
	int value;
	int operation;
	int serial;
	int  content_size;
	char *content;

}				t_ps_content;

typedef  struct s_ps_string{
	char		*string;
	char		*queue;
//	int			last;
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
int longes_subsequence(const t_list *list, t_list **buff);
t_ps_content *ft_ps_new_content(char *string);
int ft_strsplit_to_inttab(int **vector, char *string);
void	ft_lstprint3(t_list *list);
void	ft_lstd_del_2(t_list **list);
void	ft_lstd_del_3(t_list **list);

#endif
