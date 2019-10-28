#include "push_swap.h"
#include <stdlib.h>

int ft_strsplit_to_inttab(int **vector, char *string){

	char 	**tab;
	int 	size;
	if (!string)
		return (0);
	tab = ft_strsplit(string, ' ');
	size = 0;
	while (tab[size])
		size++;
	if(!((*vector) = (int*)malloc(size*sizeof(int))))
		return 0;
	int i = 0;
	while (i < size)
	{
		(*vector)[i] = ft_atoi(tab[i]);
		ft_memdel((void**)&tab[i]);
		++i;
	}
	ft_memdel((void**)&tab);
	return (size);
}