/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:50:13 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 19:58:14 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*subsrc;
	unsigned char	*subdesti;

	i = 0;
	subsrc = (unsigned char *)src;
	subdesti = (unsigned char *)dest;
	while (i < n)
	{
		subdesti[i] = subsrc[i];
		if (subsrc[i] == (unsigned char)c)
			return (++dest + i);
		i++;
	}
	return (NULL);
}
