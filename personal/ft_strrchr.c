/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:18 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/08 16:05:00 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rtn;

	rtn = NULL;
	while (*s)
	{
		if (*s == (char)c)
			rtn = (char*)s;
		s++;
	}
	return (rtn);
}
