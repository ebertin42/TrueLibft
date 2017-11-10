/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:30:54 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/10 17:44:45 by ebertin          ###   ########.fr       */
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
	while (new[i])
	{
		new[i] = '\0';
		i++;
	}
	return ((char*)new);
}
