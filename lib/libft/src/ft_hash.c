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

unsigned int ft_hash_int(const int *tab, unsigned int len, const unsigned int size)
{
	unsigned int  hash;

	hash = 0;
	if(tab)
		while (len--)
			hash = hash * 17 + tab[len] + 2;
	return hash % size;
}