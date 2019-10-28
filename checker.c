#include "push_swap.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv){

	int fd;
	t_list *list;
	char *line;
	t_list *buff;

	buff = NULL;
	fd = STDIN_FILENO;

	get_next_line(fd,&line);
	list = ft_strsplit_to_lstd(line);
	printf("Input\n");
	ft_lstditer_two(list, buff, &ft_lstprint);
	printf("--------------------------------------\n");
	ft_memdel((void**)&line);
	while (get_next_line(fd,&line) > 0) {
		printf("Exec %s:\n", line);
		ft_operation(line, &list, &buff);
		ft_memdel((void**)&line);
		ft_lstditer_two(list, buff, &ft_lstprint);
		printf("--------------------------------------\n");
	}
		if (is_sorted(list))
			printf("OK");
		else
			printf("KO");
	ft_lstd_del(&list);
	return (0);
}