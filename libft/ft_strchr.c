/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:29:53 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 19:30:52 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*rtn;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	rtn = NULL;
	while (i <= len)
	{
		if (*s == (char)c)
		{
			rtn = (char*)s;
			return (rtn);
		}
		s++;
		i++;
	}
	return (rtn);
}
