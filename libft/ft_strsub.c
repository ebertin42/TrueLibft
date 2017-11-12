/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:37:46 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 19:24:54 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	int		i;

	i = 0;
	if (!(s))
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	rtn = ft_strnew(len);
	if (!(rtn))
		return (NULL);
	while (i < (int)len)
	{
		rtn[i] = s[start];
		start++;
		i++;
	}
	return (rtn);
}
