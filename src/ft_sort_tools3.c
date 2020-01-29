/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tools3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:05:54 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:21:01 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char		*ft_get_str_and_options(int argc, char **argv, int *options)
{
	char	*string;
	char	**splited_argv;
	int		i;

	string = ft_strnew(0);
	while (--argc)
	{
		splited_argv = ft_strsplit(argv[argc], ' ');
		i = 0;
		while (splited_argv[i])
		{
			if (!(string = ft_sort_args(splited_argv[i], string, options)))
			{
				while (splited_argv[i])
					ft_memdel((void**)&splited_argv[i++]);
				ft_memdel((void**)&splited_argv);
				return (NULL);
			}
			ft_memdel((void**)&splited_argv[i++]);
		}
		ft_memdel((void**)&splited_argv);
	}
	return (string);
}

t_list		*ft_str_like_lstd(char *string)
{
	t_list	*list;
	int		*vector;
	int		size;
	int		i;
	int		j;

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

static void	ft_sep_lstd(t_list **list, t_list **buff, const int size)
{
	if (2 * ((t_ps_content*)(*list)->content)->serial >= (size))
	{
		ft_operations(PB, list, buff);
		ft_printf("pb\n");
	}
	else
	{
		ft_operations(PB, list, buff);
		ft_printf("pb\n");
		ft_operations(RB, list, buff);
		ft_printf("rb\n");
	}
}

void		ft_first_step(t_list **list, t_list **buff, int take_it)
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
			ft_printf("ra\n");
		}
}

void		ft_move_stack(t_list *list)
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
			ft_printf("ra\n");
	}
	else
	{
		i++;
		while (i--)
			ft_printf("rra\n");
	}
}
