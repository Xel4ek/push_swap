/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:35 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 15:23:36 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*list;
	int		option;

	if ((option = ft_get_data(&list, argc, argv)) == -1)
		return (0);
	if (!ft_aply_actions(&list, option))
		printf("Error\n");
	ft_lstd_del(&list);
	return (0);
}
