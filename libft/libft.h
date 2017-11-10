/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:48:51 by ebertin           #+#    #+#             */
/*   Updated: 2017/11/08 14:46:07 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		isalpha(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *str, const char *find);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

#endif
