/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:29:53 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/08 17:10:06 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*rtn;

	rtn = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			rtn = (char*)s;
			return (rtn);
		}
		s++;
	}
	return (rtn);
}
