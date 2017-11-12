/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:48:19 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/12 13:19:46 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	int		len;

	if (!(s1 && s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	rtn = (char *)malloc(sizeof(*rtn) * (len + 1));
	if (rtn == NULL)
		return (NULL);
	ft_strcpy(rtn, s1);
	ft_strcat(rtn, s2);
	return (rtn);
}
