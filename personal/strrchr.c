/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:18 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/08 14:41:35 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*rtn;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			rtn = (char)&c;
		i++;
	}
	if (!(rtn))
		rtn = NULL;
	return (rtn);
}
