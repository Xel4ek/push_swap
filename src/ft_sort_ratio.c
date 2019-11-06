#include "push_swap.h"

int ft_sort_ratio(const int *tab, size_t size){
	int res;
	int pivot;
	int i;
	int k;
	int to[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
	pivot = 0;
	res = 0;
	k = 0;
	size--;
	i = -1 ;
	while (tab[++i] != -1 && i < size)
		if (tab[i] % 2 == 1) {

			if (pivot > tab[i])
				res += (tab[i] - pivot) * k;

			pivot = tab[i];
			k = 0;
		}
		else {
			res += ABS(++k +  pivot - tab[i]);
		}

	while (i++ < size - 1)
		if (tab[i] > tab[i + 1])
			res++;
		else
			res+= ABS(tab[i + 1]  - tab[i]);
	return res;
//	size--;
//	while (size--)
//		res += ABS(tab[size] / 2 - to[size]);
			return res;
}
