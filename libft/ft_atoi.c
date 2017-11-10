/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:43:04 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/09 11:50:45 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	while (str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (result * neg);
		else
			result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * neg);
}
