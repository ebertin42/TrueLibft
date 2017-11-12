/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:59:36 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 15:19:54 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	len;
	int		i;

	i = 0;
	if (!(s))
		return ;
	len = ft_strlen(s);
	while (i <= (int)len)
	{
		s[i] = '\0';
		i++;
	}
}
