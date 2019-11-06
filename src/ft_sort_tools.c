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
int ft_min(int a, int b){
	if (a > b)
		return b;
	return a;
}

int steps_to_add(t_list *list, t_list *buff){
	int size = ft_lstdlen(list);
	int steps = 0;
	int i = 0;
	while (i < size){
		if (try_add_1(list, buff))
			if (size > 2 * i)
				return i;
			else
				return i - size;
		steps++;
		list = list->next;
		i++;
	}
}



int ft_abs(int x){
	if (x < 0)
		return -x;
	return x;
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
	int wigth = -1;
	int summ;
	i = 0;
	while (i < size){
		if (size > 2 * i)
			temp = i;
		else
			temp = i - size;
//		temp = ft_min(size - i, i);
		list_step = steps_to_add(*list, *buff);
		tmp = (temp > 0 )^(list_step > 0);
		printf("a: %4d    b: %4d  xor: %4d  |  ",temp, list_step, tmp);

		if (tmp) {
			printf("rr: %4d  ra: %4d  rb: %4d   summ: %d\n", (min = 0), list_step, temp,
				   (	summ = ft_abs(list_step) + ft_abs(temp)));
		}else {
			if (temp >= 0 && list_step >= 0)
				sign = 1;
			else
				sign =  -1;
			min = ft_min(ft_abs(temp), ft_abs(list_step));
			min *= sign;
			summ = ft_abs(list_step - min) +  ft_abs(temp - min) +  ft_abs(min);
			printf("rr: %4d  ra: %4d  rb: %4d   summ: %d\n", min,  list_step - min,temp - min,  summ);
			}
		if (wigth > summ || wigth == -1)
		{
			rr = min;
			rb = temp - min;
			ra = list_step - min;
			wigth = summ;
		}
	++i;
		*buff = (*buff)->next;
	}

	while (rr){
		if (rr > 0) {
			ft_operations(RR, list, buff);
			printf("rr\n");
			--rr;
		}
		else{
			ft_operations(RRR, list, buff);
			printf("rrr\n");
			++rr;
		}
	}
	while (ra){
		if (ra > 0) {
			ft_operations(RA, list, buff);
			printf("ra\n");
			--ra;
		}
		else{
			ft_operations(RRA, list, buff);
			printf("rra\n");
			++ra;
		}
	}
	while (rb){
		if (rb > 0) {
			ft_operations(RB, list, buff);
			printf("rb\n");
			--rb;
		}
		else{
			ft_operations(RRB, list, buff);
			printf("rrb\n");
			++rb;
		}

	}
	ft_operations(PA, list, buff);
	printf("pa\n");
	ft_lstditer_two(*list, *buff, &ft_lstprint3);
	return 1;

}
