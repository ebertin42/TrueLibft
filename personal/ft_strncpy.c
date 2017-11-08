/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:57:32 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/08 14:41:54 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i] && i <= (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < n)
	{
		while (dest[i] && i <= (int)n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
