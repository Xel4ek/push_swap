#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft.h"

void					ft_lstprint(t_list *list);
t_list					*ft_strsplit_to_lstd(char const *string);

int						is_sorted(t_list *list);
char					*ft_lstd_to_str(t_list *list1, t_list *list2, size_t size1, size_t size2, size_t len1, size_t len2);
void					ft_lstditer_reduce(t_list *list, int *n, void (*f)());
size_t					ft_is_str_in_lstd(char *string, t_list *list);
void					ft_lstprint(t_list *list);
int						ft_lstd_swap(t_list **list);
int						ft_operation(char *string, t_list **a, t_list **b);
#endif
