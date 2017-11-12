/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:52:42 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/12 16:58:58 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t ldst;
	size_t lsrc;
	size_t ret;

	i = 0;
	j = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen((char *)src);
	if (size <= ldst)
		ret = lsrc + size;
	else
	{
		ret = lsrc + ldst;
		j = size - ldst - 1;
		while (j > 0)
		{
			dst[ldst + i] = src[i];
			i++;
			j--;
		}
		dst[ldst + i] = '\0';
	}
	return (ret);
}
