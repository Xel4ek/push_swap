#include "libft.h"

int ft_less(const int *a, const int *b){
	return (*a - *b);

}

void ft_quick_sort(int *start, int *finish)
{
	int *pivot_left;
	int *pivot_right;
	int pivot;

	if((pivot_left = start) < (pivot_right = finish))
	{
		pivot = *(start + (finish - start) / 2);
		while (pivot_left < pivot_right)
		{
			while (*pivot_left < pivot)
				++pivot_left;
			while (pivot < *pivot_right)
				--pivot_right;
			if (pivot_left <= pivot_right)
			{
				if (*pivot_left > *pivot_right)
					ft_swap(pivot_left, pivot_right);
				++pivot_left;
				--pivot_right;
			}
		}
		if (pivot_left < finish)
			ft_quick_sort(pivot_left, finish);
		if (start < pivot_right)
			ft_quick_sort(start, pivot_right);
	}
}
/*
void ft_quick_sort(void *base, size_t num, size_t size, int (compare)(const void*, const void*)){

}
*/