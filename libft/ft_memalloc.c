/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:51:59 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/11 16:33:02 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	int				i;

	i = 0;
	mem = malloc(sizeof(void) * size);
	if (!(mem))
		return (NULL);
	while (i <= (int)size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
