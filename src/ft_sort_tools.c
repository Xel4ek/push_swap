/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:07 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 18:45:38 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	try_add_1(t_list *list, t_list *buff)
{
	if (((t_ps_content*)(buff)->content)->serial <=
	((t_ps_content*)(list)->content)->serial &&
		((t_ps_content*)(buff)->content)->serial >=
		((t_ps_content*)(list)->prev->content)->serial)
		return (1);
	if (((t_ps_content*)(buff)->content)->serial >=
			((t_ps_content*)(list)->prev->content)->serial &&
			((t_ps_content*)(list)->content)->serial <=
			((t_ps_content*)(list)->prev->content)->serial)
		return (1);
	if (((t_ps_content*)(buff)->content)->serial <=
	((t_ps_content*)(list)->content)->serial &&
			((t_ps_content*)(list)->content)->serial <=
			((t_ps_content *)(list)->prev->content)->serial)
		return (1);
	return (0);
}

int steps_to_add(t_list *list, t_list *buff)
{
	int size;
	int steps;
	int i;

	size = ft_lstdlen(list);
	steps = 0;
	i = 0;
	while (i < size)
	{
		if (try_add_1(list, buff))
		{
			if (size > 2 * i)
				return (i);
			return (i - size);
		}
		steps++;
		list = list->next;
		i++;
	}
	return (0);
}

static void ft_aply_rr(int rr, t_list **list, t_list **buff)
{
	while (rr)
	{
		if (rr > 0)
		{
			ft_operations(RR, list, buff);
			printf("rr\n");
			--rr;
		}
		else
		{
			ft_operations(RRR, list, buff);
			printf("rrr\n");
			++rr;
		}
	}
}

static void ft_aply_ra(int ra, t_list **list, t_list **buff){
	while (ra)
	{
		if (ra > 0)
		{
			ft_operations(RA, list, buff);
			printf("ra\n");
			--ra;
		}
		else
		{
			ft_operations(RRA, list, buff);
			printf("rra\n");
			++ra;
		}
	}
}
static void ft_aply_rb(int rb, t_list **list, t_list **buff)
{
	while (rb)
	{
		if (rb > 0)
		{
			ft_operations(RB, list, buff);
			printf("rb\n");
			--rb;
		}
		else
		{
			ft_operations(RRB, list, buff);
			printf("rrb\n");
			++rb;
		}
	}
}

int ft_find_min_step(int temp, int list_step){
	int min;
	int sign;

	min = 0;
	if (!(((unsigned) (temp > 0)) ^ ((unsigned) (list_step > 0))))
	{
		sign = 1;
		if (temp < 0 || list_step < 0)
			sign = -1;
		min = ft_min(ft_abs(temp), ft_abs(list_step)) * sign;
	}
	return (min);
}

t_rotate_data set_rotate(int const rr, int const ra, int const rb, int const summ){
	t_rotate_data  item;

	item.rr = rr;
	item.ra = ra;
	item.rb = rb;
	item.summ = summ;
	return (item);
}

t_rotate_data ft_find_min_rotatre(t_list **list, t_list **buff){
	int i;
	int size;
	t_rotate_data rotate;
	int temp;
	int list_step;
	int min;
	int summ;

	i = -1;
	rotate = set_rotate(0, 0, 0, -1);
	if (!(size = ft_lstdlen(*buff)))
		return (rotate);
	while (++i < size)
	{
		temp = i;
		if (size < 2 * i)
			temp -= size;
		list_step = steps_to_add(*list, *buff);
		min = ft_find_min_step(temp, list_step);
		summ = ft_abs(list_step - min) + ft_abs(temp - min) + ft_abs(min);
		if (rotate.summ > summ || rotate.summ == -1)
			rotate = set_rotate(min, list_step - min, temp - min, summ);
		*buff = (*buff)->next;
	}
	return (rotate);
}

void sort_lstds(t_list **list, t_list **buff)
{
	t_rotate_data rotate;

	rotate = ft_find_min_rotatre(list,buff);
	ft_aply_rr(rotate.rr, list, buff);
	ft_aply_ra(rotate.ra, list, buff);
	ft_aply_rb(rotate.rb, list, buff);
	ft_operations(PA, list, buff);
	printf("pa\n");
}


static void clear_lstd(t_list **list, int size)
{
	while (size--)
	{
		((t_ps_content*)(*list)->content)->operation = -1;
		*list = (*list)->next;
	}
}

static void mark_sequence(int take_it, t_list **list, t_list *buff, int size)
{
	int i;

	while (take_it--)
	{
		i = size;
		while (i--)
		{
			if (((t_ps_content*)(*list)->content)->serial ==
					((t_ps_content*)buff->content)->value)
				((t_ps_content*)(*list)->content)->operation = FREEZE;
			(*list) = (*list)->next;
		}
		buff = buff->next;
	}
}

int	ft_sequence_prepear(t_list **list)
{
	int size;
	int i;
	int max_steps;
	int take_it;
	t_list *buff;

	size = ft_lstdlen(*list);
	take_it = 0;
	i = size;
	buff = NULL;
	while (i--)
	{
		max_steps = longest_subsequence_lstd(*list, &buff);
		if (max_steps > take_it)
		{
			take_it = max_steps;
			clear_lstd(list, size);
			mark_sequence(take_it, list, buff, size);
		}
		ft_lstd_del(&buff);
		(*list) = (*list)->next;
	}
	return (take_it);
}

int	ft_is_number(char *string)
{
	if (*string == '-' || *string == '+')
	{
		if (-1 != ft_isdigit(*(string + 1)))
			++string;
		else
			return (0);
	}
	while (*string)
	{
		if (ft_isdigit(*string) == -1)
			return (0);
		++string;
	}
	return (1);
}

int	ft_is_option(char *string)
{
	if (*(string++) == '-' && !*(string + 1))
	{
		if (*string == 'v' || *string == 'V')
			return (*string);
	}
	return (0);
}

char *ft_sort_args(char *arg, char *src, int *option){
	char *temp;

	if (ft_is_number(arg))
	{
		temp = ft_strjoin(src, " ");
		ft_memdel((void **) &src);
		src = ft_strjoin(temp, arg);
		ft_memdel((void **) &temp);
	} else if ((*option = ft_is_option(arg)))
		;
	else
	{
		ft_memdel((void **) &src);
		return (NULL);
	}
	return (src);
}

char	*ft_get_str_and_options(int argc, char **argv, int *options)
{
	char *string;
	char **splited_argv;
	int i;

	string = ft_strnew(0);
	while (--argc)
	{
		splited_argv = ft_strsplit(argv[argc], ' ');
		i = 0;
		while(splited_argv[i])
		{
			if (!(string = ft_sort_args(splited_argv[i], string, options)))
			{
				while(splited_argv[i])
					ft_memdel((void**)&splited_argv[i++]);
				ft_memdel((void **) &splited_argv);
				return (NULL);
			}
			ft_memdel((void**)&splited_argv[i++]);
		}
		ft_memdel((void **) &splited_argv);
	}
	return (string);
}


char	*ft_get_str(int argc, char **argv)
{
	char *string;
	char *temp;

	string = ft_strnew(0);
	while (--argc)
	{
		temp = ft_strjoin(string, " ");
		ft_memdel((void**)&string);
		string = ft_strjoin(temp, argv[argc]);
		ft_memdel((void**)&temp);
	}
	return (string);
}


t_list	*ft_str_like_lstd(char *string)
{
	t_list *list;
	int *vector;
	int size;
	int i;
	int j;

	list = ft_strsplit_to_lstd(string);
	size = ft_strsplit_to_inttab(&vector, string);
	i = 0;
	ft_quick_sort(vector, vector + size - 1);
	while (i < size)
	{
		j = -1;
		while (++j < size)
			if (vector[j] == ((t_ps_content*)list->content)->value)
				((t_ps_content*)list->content)->serial = j;
		list = list->next;
		++i;
	}
	ft_memdel((void**)&vector);
	return (list);
}

static void ft_sep_lstd(t_list **list, t_list **buff, const int size){
	if (2 * ((t_ps_content*)(*list)->content)->serial >= (size))
	{
		ft_operations(PB, list, buff);
		printf("pb\n");
	}
	else
	{
		ft_operations(PB, list, buff);
		printf("pb\n");
		ft_operations(RB, list, buff);
		printf("rb\n");
	}
}

void	ft_first_step(t_list **list, t_list **buff, int take_it)
{
	int max_steps;
	int size;

	size = ft_lstdlen(*list);
	max_steps = size - take_it;
	while (max_steps--)
		if ((((t_ps_content*)(*list)->content)->operation != FREEZE))
			ft_sep_lstd(list, buff, size);
		else
		{
			max_steps++;
			ft_operations(RA, list, buff);
			printf("ra\n");
		}
}

void	ft_move_stack(t_list *list)
{
	int i;
	int size;

	size = ft_lstdlen(list);
	i = size;
	while (i--)
	{
		if ((((t_ps_content*)list->content)->serial) < 1)
			break ;
		list = list->next;
	}
	if (i * 2 >= size)
	{
		i = size - i;
		while (--i)
			printf("ra\n");
	}
	else
	{
		i++;
		while (i--)
			printf("rra\n");
	}
}
