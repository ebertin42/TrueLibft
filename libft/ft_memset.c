/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:21:52 by anonymou          #+#    #+#             */
/*   Updated: 2017/11/10 19:36:04 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*mem;
	int		i;

	i = 0;
	if (n == 0)
		return (s);
	mem = (char *)s;
	while (i <= (int)n)
	{
		*mem = (char)c;
		mem++;
		i++;
	}
	return (mem);
}
