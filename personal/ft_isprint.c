//
// Created by Elliot on 27/10/2017.
//
#include "libft.h"

int	ft_isprint(int c)
{
    return ((c >= 32 && c <= 126) ? 1 : 0);
}
