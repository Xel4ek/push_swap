/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_new_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:20:43 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 19:21:18 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_ps_content	*ft_ps_new_content_int(int tab)
{
	t_ps_content	*ptr;

	if (!(ptr = (t_ps_content*)malloc(sizeof(*ptr))))
		return (NULL);
	ptr->value = tab;
	ptr->operation = -1;
	ptr->serial = -1;
	ptr->content_size = sizeof(int);
	ptr->content = tab;
	return (ptr);
}
