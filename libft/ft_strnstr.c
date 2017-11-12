/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:25:13 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 16:55:42 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)str;
	if (!find[i])
		return (s);
	while (s[i])
	{
		j = i;
		k = 0;
		while (s[j] == find[k] && len != j)
		{
			k++;
			j++;
			if ((find[k] == s[j]) && (k == len || find[k + 1] == '\0'))
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
