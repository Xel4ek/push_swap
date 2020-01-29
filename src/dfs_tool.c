/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs_tool.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:10:06 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 18:18:59 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_digit_to_str(char *dist, const char *src, enum opns operation)
{
	char *itoa_ptr;

	ft_strcpy(dist, src);
	ft_strcat(dist, " ");
	itoa_ptr = ft_itoa(operation);
	ft_strcat(dist, itoa_ptr);
	ft_memdel((void**)&(itoa_ptr));
}
