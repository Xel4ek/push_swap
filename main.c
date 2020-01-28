/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:07 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 15:19:11 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*buff;
	int		take_it;

	buff = NULL;
	if ((ft_get_data(&list, argc, argv)) == -1)
		return (0);
	if (ft_lstdlen(list) < 6)
		ft_bfs_sort(&list);
	else {
		take_it = ft_sequence_prepear(&list);
		ft_first_step(&list, &buff, take_it);
		while (buff)
			sort_lstds(&list, &buff);
		ft_move_stack(list);
	}
	ft_lstd_del_2(&list);
	return (0);
}
