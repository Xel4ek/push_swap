#include "libft.h"

unsigned int ft_hash(const char *string, unsigned int size)
{
	unsigned int  hash;

	hash = 0;
	if(string)
		while (*string)
			hash = hash * 13 + *string++ - 32 + 1;
	return hash % size;
}