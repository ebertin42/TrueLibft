//
// Created by Elliot on 27/10/2017.
//

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}