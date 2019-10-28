#include "push_swap.h"
#include <stdlib.h>

t_ps_content *ft_ps_new_content(char *string){
	t_ps_content *ptr;
	size_t content_size;


	if (!(ptr = (t_ps_content*)malloc(sizeof(*ptr))))
		return NULL;
	content_size = ft_strlen(string);
	if (!(ptr->content = (char*)malloc(content_size + 1)))
	{
		ft_memdel((void**)&ptr);
		return NULL;
	}
	ptr->value = ft_atoi(string);
	ptr->operation = -1;
	ptr->serial = -1;
	ptr->content_size = content_size;
	ptr->content = ft_memcpy(ptr->content, string, content_size + 1);

	return ptr;
}