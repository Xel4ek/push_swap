/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tools2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:05:50 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/29 17:21:00 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		try_add(t_list *list, t_list *buff)
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

int		steps_to_add(t_list *list, t_list *buff)
{
	int size;
	int steps;
	int i;

	size = ft_lstdlen(list);
	steps = 0;
	i = 0;
	while (i < size)
	{
		if (try_add(list, buff))
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

int		ft_is_number(char *string)
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

int		ft_is_option(char *string)
{
	if (*(string++) == '-' && *string && !*(string + 1))
	{
		if (*string == 'v' || *string == 'V')
			return (*string);
	}
	return (0);
}

char	*ft_sort_args(char *arg, char *src, int *option)
{
	char *temp;

	if (ft_is_number(arg))
	{
		temp = ft_strjoin(src, " ");
		ft_memdel((void**)&src);
		src = ft_strjoin(temp, arg);
		ft_memdel((void**)&temp);
	}
	else if ((*option = ft_is_option(arg)))
		;
	else
	{
		ft_memdel((void**)&src);
		return (NULL);
	}
	return (src);
}
