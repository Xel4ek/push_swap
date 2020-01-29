/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:25:42 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:25:50 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_operations(char *string)
{
	if (!ft_strcmp(string, "0"))
		ft_printf("sa\n");
	else if (!ft_strcmp(string, "1"))
		ft_printf("sb\n");
	else if (!ft_strcmp(string, "2"))
		ft_printf("ss\n");
	else if (!ft_strcmp(string, "3"))
		ft_printf("ra\n");
	else if (!ft_strcmp(string, "4"))
		ft_printf("rb\n");
	else if (!ft_strcmp(string, "5"))
		ft_printf("rr\n");
	else if (!ft_strcmp(string, "6"))
		ft_printf("rra\n");
	else if (!ft_strcmp(string, "7"))
		ft_printf("rrb\n");
	else if (!ft_strcmp(string, "8"))
		ft_printf("rrr\n");
	else if (!ft_strcmp(string, "9"))
		ft_printf("pa\n");
	else if (!ft_strcmp(string, "10"))
		ft_printf("pb\n");
}

void	operation_move_bask(enum opns operation,
							t_list **list, t_list **buff)
{
	if (operation / 3 == 0)
		ft_operations(operation, list, buff);
	else if (operation / 3 == 1)
		ft_operations(operation + 3, list, buff);
	else if (operation / 3 == 2)
		ft_operations(operation - 3, list, buff);
	else if (operation == PA)
		ft_operations(PB, list, buff);
	else if (operation == PB)
		ft_operations(PA, list, buff);
}

void	ft_print_operators(const char *string)
{
	char	**splited_string;
	int		i;

	splited_string = ft_strsplit(string, ' ');
	i = 0;
	while (splited_string[i])
	{
		ft_print_operations(splited_string[i]);
		ft_memdel((void**)&splited_string[i++]);
	}
	ft_memdel((void**)&splited_string);
}
