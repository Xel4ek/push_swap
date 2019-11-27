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


	char *str;
	if (argc > 1) {
		if (!(str = ft_get_str_and_options(argc, argv,  NULL))) {
			printf("Error\n");
			return 0;
		}
		list = ft_str_like_lstd(str);
		ft_memdel((void**)&str);
		printf("Input\n");
		ft_lstditer_two(list, buff, &ft_lstprint);
		printf("--------------------------------------\n");
		while (get_next_line(fd, &line) > 0) {
			printf("Exec %s:\n", line);
			ft_operation(line, &list, &buff);
			ft_memdel((void **) &line);
			ft_lstditer_two(list, buff, &ft_lstprint);
			printf("--------------------------------------\n");
		}
		if (is_sorted(list) && !buff)
			printf("OK");
		else
			printf("KO");
		ft_lstd_del(&list);
	}
	else
		printf("Error\n");
	return (0);
}