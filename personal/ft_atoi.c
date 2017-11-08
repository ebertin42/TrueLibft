//
// Created by Elliot on 27/10/2017.
//
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