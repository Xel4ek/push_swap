#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

void	ft_lstprint(t_list *list){
	if (list)
		printf("%6s ",(char*)list->content);
		//write(1 , list->content, list->content_size);
	else
		printf("%5s_","");
//		write(1, "(null) ", 7);
}

void	ft_lstprint2(t_list *list){
	if (list)
		printf("{%s}\n",(char*)list->content);
		//write(1 , list->content, list->content_size);
	else
		printf("{}");
//		write(1, "(null) ", 7);
}