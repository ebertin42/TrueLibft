/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:56:14 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 18:39:26 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	i = 0;
	src1 = (char *)src;
	dst1 = (char *)dst;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
