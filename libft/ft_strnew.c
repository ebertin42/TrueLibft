/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:30:54 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 18:02:29 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*new;
	int				i;

	i = 0;
	new = malloc(sizeof(unsigned char) * size + 1);
	if (!(new))
		return (NULL);
	while (i <= (int)size)
	{
		new[i] = '\0';
		i++;
	}
	return ((char*)new);
}
