/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:21:52 by anonymou          #+#    #+#             */
/*   Updated: 2017/11/09 16:41:43 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memset (void *s, int c, size_t n)
{
	char	*mem;
	int		i;

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
