/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:40:20 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/12 14:57:49 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*tmp;

	tmp = (char*)s;
	i = 0;
	while (i < (int)n)
	{
		if (tmp[i] == (char)c)
			return ((void*)s);
		s++;
		i++;
	}
	return (NULL);
}
