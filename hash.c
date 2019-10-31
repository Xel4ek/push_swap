#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

unsigned int ft_hash(const char *string)
{
	unsigned int  hash;

	hash = 0;
	if(string)
		while (*string)
			hash = hash * 13 + *string++ - 32 + 1;
	return hash % 4096;
}

int main()
{
	unsigned int temp = ~((unsigned int)(~0)>>1);
	unsigned int hash;
	unsigned int i = 0;

		hash = ft_hash("2 124 3 123 / 23");
//hash = HashPJW("asdlkasdkasdk ajsldja lskjdkla sjdlaks jdlkasj123123123 12 dlkajsd ljasld jaslkjd laksjd alksjdlakjsdlasj lasjdl ajlksdjkl");
	while (i++ < 10)
	printf("%d\n", ('0' + i ) - 32+1);
	printf("%d\n", (' ') - 32+1);
	printf("%d\n", ('/') - 32+1);
	printf("%u\n", hash);
	return 0;
}