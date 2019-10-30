/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:43:11 by hwolf             #+#    #+#             */
/*   Updated: 2019/09/06 17:24:17 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(!n)
		return 0;
	while (--n && *s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
