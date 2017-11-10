/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:18 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 19:27:49 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
			rtn = (char*)s;
		s++;
		i++;
	}
	return (rtn);
}
