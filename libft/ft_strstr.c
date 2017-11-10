/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:38:28 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 16:25:35 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s;
	char	*f;

	i = 0;
	j = 0;
	s = (char *)str;
	f = (char *)find;
	if (!f[i])
		return (s);
	while (s[i])
	{
		j = i;
		k = 0;
		while (s[j++] == f[k++])
			if (!f[k])
				return (&s[i]);
		i++;
	}
	return (NULL);
}
