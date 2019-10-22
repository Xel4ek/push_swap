#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

void	ft_lstprint(t_list *list){
	if (list)
		printf("%s",list->content);
		//write(1 , list->content, list->content_size);
	else
		printf("%5s_","");
//		write(1, "(null) ", 7);


}