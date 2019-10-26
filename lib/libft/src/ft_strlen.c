/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:03:30 by hwolf             #+#    #+#             */
/*   Updated: 2019/10/26 17:35:36 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char *char_ptr;
	const unsigned long int *longword_ptr;
	unsigned long int longword;
	unsigned long int himagic;
	unsigned long int lomagic;

	char_ptr = str;
	while ((unsigned long int) char_ptr & (sizeof (longword) - 1))
	{
		 ++char_ptr;
		if (*char_ptr == '\0')
			return char_ptr - str;
	}

	longword_ptr = (unsigned long int *) char_ptr;
	himagic = 0x80808080L;
	lomagic = 0x01010101L;
	if (sizeof (longword) > 4)
	{
		himagic = ((himagic << 16) << 16) | himagic;
		lomagic = ((lomagic << 16) << 16) | lomagic;
	}

	while (1)
	{
		longword = *longword_ptr++;
		if (((longword - lomagic) & ~longword & himagic) != 0)
		{
			const char *cp = (const char *) (longword_ptr - 1);
			if (cp[0] == 0)
				return cp - str;
			if (cp[1] == 0)
				return cp - str + 1;
			if (cp[2] == 0)
				return cp - str + 2;
			if (cp[3] == 0)
				return cp - str + 3;
			if (sizeof (longword) > 4)
			{
				if (cp[4] == 0)
					return cp - str + 4;
				if (cp[5] == 0)
					return cp - str + 5;
				if (cp[6] == 0)
					return cp - str + 6;
				if (cp[7] == 0)
					return cp - str + 7;
			}
		}
	}

}
