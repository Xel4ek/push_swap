/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:56 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 18:23:58 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

int	ft_duplicate_finder(char *string)
{
	int		*vector;
	int		size;
	int		i;
	int		is_valid;

	is_valid = 1;
	if (!string)
		return (0);
	size = ft_strsplit_to_inttab(&vector, string);
	while (size--)
	{
		if (!is_valid)
			break ;
		i = size;
		while (i--)
			if (vector[size] == vector[i])
			{
				is_valid = 0;
				break ;
			}
	}
	ft_memdel((void**)&vector);
	return (!is_valid);
}

int	ft_overloaded_checker(char *string)
{
	char	**tab;
	char	*tmp;
	int		size;
	int		item;
	int		is_valid;

	is_valid = 1;
	if (!string)
		return (0);
	tab = ft_strsplit(string, ' ');
	size = -1;
	while (tab[++size])
	{
		item = ft_atoi(tab[size]);
		if ((ft_strlen(tab[size]) > 2 && (item == 0 || item == -1)))
			is_valid = 0;
		tmp = ft_itoa(item);
		if (ft_strcmp(tab[size], tmp))
			is_valid = 0;
		ft_memdel((void**)&tmp);
		ft_memdel((void**)&tab[size]);
	}
	ft_memdel((void**)&tab);
	return (!is_valid);
}

int	ft_action_checker(char *string)
{
	if (!ft_strcmp(string, "pa") || !ft_strcmp(string, "pb") ||
		!ft_strcmp(string, "ra") || !ft_strcmp(string, "rb") ||
		!ft_strcmp(string, "rr") || !ft_strcmp(string, "rra") ||
		!ft_strcmp(string, "rrb") || !ft_strcmp(string, "rrr") ||
		!ft_strcmp(string, "sa") || !ft_strcmp(string, "sb") ||
		!ft_strcmp(string, "ss"))
		return (0);
	return (1);
}

int	ft_get_data(t_list **list, int argc, char **argv)
{
	char	*str;
	int		option;

	option = 0;
	if (argc < 2)
		return (-1);
	if (!(str = ft_get_str_and_options(argc, argv, &option)) ||
			ft_overloaded_checker(str) || ft_duplicate_finder(str))
	{
		ft_printf("Error\n");
		ft_memdel((void**)&str);
		return (-1);
	}
	*list = ft_str_like_lstd(str);
	ft_memdel((void**)&str);
	if (option)
	{
		ft_printf("\033cInput\n");
		ft_lstditer_two(*list, NULL, &ft_lstprint3);
	}
	return (option);
}

int	ft_aply_actions(t_list **list, int option)
{
	char	*line;
	t_list	*buff;

	buff = NULL;
	while (get_next_line(STDIN_FILENO, &line) > 0)
	{
		if (ft_action_checker(line))
		{
			ft_lstd_del(&buff);
			ft_memdel((void**)&line);
			return (0);
		}
		ft_operation(line, list, &buff);
		if (option)
		{
			printf("\033cExec %s:\n", line);
			ft_lstditer_two(*list, buff, &ft_lstprint3);
			sleep(1);
		}
		ft_memdel((void**)&line);
	}
	(is_sorted(*list) && !buff) ? ft_printf("OK") : ft_printf("KO");
	ft_lstd_del(&buff);
	return (1);
}
