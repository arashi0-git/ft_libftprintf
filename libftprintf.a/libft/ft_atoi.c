/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryamamo <aryamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:38:14 by aryamamo          #+#    #+#             */
/*   Updated: 2024/11/13 13:02:16 by aryamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_skip_and_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	while (**nptr == 32 || (**nptr >= 9 && **nptr <= 13))
		(*nptr)++;
	if (**nptr == '-')
	{
		sign = -1;
		(*nptr)++;
	}
	else if (**nptr == '+')
		(*nptr)++;
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			sign;

	result = 0;
	sign = ft_skip_and_sign(&nptr);
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result > (LONG_MAX - (*nptr - '0')) / 10)
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
