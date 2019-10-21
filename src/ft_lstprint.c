#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

void	ft_lstprint(t_list *list){
	if (list)
		printf("%d\n", *(int*)(list->content));
		//write(1 , list->content, list->content_size);
	else
		write(1, "(null)", 6);


}