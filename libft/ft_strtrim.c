/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:59:41 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 14:35:33 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	checker(const char *s, size_t i, size_t len)
{
	while (i < len)
	{
		if (s[i] != 32 || s[i] != '\n' || s[i] != ',' || s[i] != '\t')
			return (1);
		i++;
	}
	return (0);
}

size_t	static lenculator(const char *s)
{
	size_t j;
	size_t len;
	size_t i;

	j = 0;
	i = 0;
	len = ft_strlen(s);
	while (s[i] != 32 || s[i] != '\n' || s[i] != ',' || s[i] != '\t')
		i++;
	while (i < len)
	{
		if (s[i] != 32 || s[i] != '\n' || s[i] != ',' || s[i] != '\t')
		{
			if (checker(s, i, len) == 0)
				i++;
		}
		else
		{
			i++;
			j++;
		}
	}
	return (j);
}

char	*ft_strtrim(char const *s)
{
	char	*rtn;
	size_t		i;
	size_t		len;

	i = 0;
	len = lenculator(s);
	rtn = malloc(sizeof(char) * len + 1);
	while (i < len && (s[i] == 32 || s[i] == '\n' || s[i] == ',' || s[i] == '\t'))
		i++;
	if (!(s[i]))
		return (rtn);
	while (i < len)
	{
		if (s[i] == 32 || s[i] == '\n' || s[i] == ',' || s[i] == '\t')
			if (checker(s, i, len) == 0)
				return (rtn);
		rtn[i] = s[i];
		i++;
	}
	return (rtn);
}
