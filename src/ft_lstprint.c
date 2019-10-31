#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

void	ft_lstprint(t_list *list){
	t_ps_content *item;

	if (list){
		item = (t_ps_content*)list->content;
		printf("%6d %6d %4d %3d\n",item->content, item->value, item->serial, item->operation);

	}	//write(1 , list->content, list->content_size);
	else
		printf("%13s_%9s","","");
//		write(1, "(null) ", 7);
}
/*
void	ft_lstprint2(t_list *list){
	if (list)
		printf("{%s}\n",(char*)list->content);
		//write(1 , list->content, list->content_size);
	else
		printf("{}");
//		write(1, "(null) ", 7);
}

void	ft_lstprint3(t_list *list) {
	t_ps_content *item;
	int stars;
	char line[1024];

	if (list){
		item = (t_ps_content*)list->content;
		printf("%6s ",item->content);
		stars = item->serial + 1;
		line[stars] = 0;
		while (stars-- > 0)
			line[stars] = '*';
		printf("\e[1;35m""%-50s ""\e[0m",line);
	}	//write(1 , list->content, list->content_size);
	else
		printf("%5s_%50s","","");
//		write(1, "(null) ", 7);
}
*/
void	ft_lstprint4(t_list *list){
	t_ps_string *item;
	int i ;

	i = 0;
	if (list){
		item = (t_ps_string*)list->content;
		while(i < item->size)
			printf("%d ", item->string[i++]);
		printf("string: %s\n",item->queue);
	//	printf("%6d %6d %4d %3d\n",item->content, item->value, item->serial, item->operation);

	}	//write(1 , list->content, list->content_size);
	else
		printf("%13s_%9s","","");
//		write(1, "(null) ", 7);
}