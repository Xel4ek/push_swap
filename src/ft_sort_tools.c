#include "push_swap.h"
#include <stdio.h>

int try_add_1(t_list *list, t_list *buff){
//	if(((t_ps_content *)(*list)->content)->serial > 100)
//		return 0;
	if (((t_ps_content *) (buff)->content)->serial <= ((t_ps_content *)(list)->content)->serial &&
		((t_ps_content *) (buff)->content)->serial >= ((t_ps_content *) (list)->prev->content)->serial) {
		return 1;
		//		ft_operations(PA, list, buff);
	}
	else if (((t_ps_content *) (buff)->content)->serial >=
			 ((t_ps_content *) (list)->prev->content)->serial &&
			 ((t_ps_content *) (list)->content)->serial <=
			 ((t_ps_content *) (list)->prev->content)->serial) {
		return 1;
//		ft_operations(PA, list, buff);
	}
	else if (((t_ps_content *) (buff)->content)->serial <= ((t_ps_content *) (list)->content)->serial &&
			 ((t_ps_content *) (list)->content)->serial <= ((t_ps_content *) (list)->prev->content)->serial) {
			return 1;
//		ft_operations(PA, list, buff);

	}
	else
		return 0;
}


int steps_to_add(t_list *list, t_list *buff){
	int size = ft_lstdlen(list);
	int steps = 0;
	int i = size;
	while (i){
		if (try_add_1(list, buff))
			return ((size - i < i) ? i - size : i);
		i--;
		steps++;
		list = list->next;
	}
}



int ft_abs(int x){
	if (x < 0)
		return -x;
	return x;
}

int ft_min(int a, int b){
	if (a > b)
		return b;
	return a;
}

int sort_lstds(t_list **list, t_list **buff){
	int size;
	int dst_size = ft_lstdlen(*list);
	if (!(size = ft_lstdlen(*buff)))
		return 0;
	int tab[size];
	int i;
	int list_step;
	int temp;
	int min;
	list_step = 0;
	i = size;
	int tmp;
	int sign;
	int rr;
	int ra;
	int rb;
	while (i){
		temp = (size - i < i) ? i - size : i;
		list_step = steps_to_add(*list, *buff);
		tmp = (temp > 0 )^(list_step > 0);
		printf("a: %4d    b: %4d  xor: %4d  |  ",temp, list_step, tmp);

		if (tmp)
			printf("rr: %4d  ra: %4d  rb: %4d   summ: %d\n", (min = 0), temp, list_step,  ft_abs(list_step) +  ft_abs(temp));
		else {
			if (temp >= 0 && list_step >= 0)
				sign = 1;
			else
				sign =  -1;
			min = ft_min(ft_abs(temp), ft_abs(list_step));
			min *= sign;
			printf("rr: %4d  ra: %4d  rb: %4d   summ: %d\n", min, temp - min , list_step - min, ft_abs(list_step - min) +  ft_abs(temp - min) +  ft_abs(min));
		}
			i--;
		*buff = (*buff)->next;
	}
	return 1;

}
