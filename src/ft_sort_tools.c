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

int sort_lstds(t_list **list, t_list **buff)
{
	int size;
	int dst_size;


	int i;
	int list_step;
	int temp;
	int min;

	int tmp;
	int sign;
	int rr;
	int ra;
	int rb;
	int wigth;
	int summ;

	dst_size = ft_lstdlen(*list);
	if (!(size = ft_lstdlen(*buff)))
		return (0);
	int tab[size];
	list_step = 0;
	i = 0;
	wigth = -1;
	while (i < size)
	{
		if (size > 2 * i)
			temp = i;
		else
			temp = i - size;
		list_step = steps_to_add(*list, *buff);
		tmp = (temp > 0) ^ (list_step > 0);
		if (tmp)
		{
			min = 0;
			summ = ft_abs(list_step) + ft_abs(temp);
		}
		else
		{
			if (temp >= 0 && list_step >= 0)
				sign = 1;
			else
				sign = -1;
			min = ft_min(ft_abs(temp), ft_abs(list_step));
			min *= sign;
			summ = ft_abs(list_step - min) + ft_abs(temp - min) + ft_abs(min);
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
	ft_operations(PA, list, buff);
	printf("pa\n");
	return (1);
}


int	ft_sequence_prepear(t_list **list)
{
	int size;
	int i;
	int max_steps;
	int take_it;
	t_list *buff;
	int m;
	int k;
	int j;

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

			j = size;
			while (j--)
			{
				((t_ps_content*)(*list)->content)->operation = -1;
				*list = (*list)->next;
			}
			k = take_it;
			while (k--)
			{
				m = size;
				while (m--)
				{
					if (((t_ps_content*)(*list)->content)->serial ==
						((t_ps_content*)buff->content)->value)
						((t_ps_content*)(*list)->content)->operation = FREEZE;
					(*list) = (*list)->next;
				}
				buff = buff->next;
			}
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
	*string = 0;
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
	*string = 0;
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
		j = 0;
		while (j < size)
		{
			if (vector[j] == ((t_ps_content*)list->content)->value)
				((t_ps_content*)list->content)->serial = j;
			++j;
		}
		list = list->next;
		++i;
	}
	ft_memdel((void**)&vector);
	return (list);
}

int	ft_first_step(t_list **list, t_list **buff, int take_it)
{
	int max_steps;
	int steps;
	int size;
	int i;

	size = ft_lstdlen(*list);
	max_steps = size - take_it;
	i = size;
	steps = 0;
	while (i-- && max_steps--)
	{

		if ((((t_ps_content*)(*list)->content)->operation != FREEZE))
		{
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
				steps++;
			}
		}
		else
		{
			max_steps++;
			ft_operations(RA, list, buff);
			printf("ra\n");
		}
		steps++;
	}
	return (steps);
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
