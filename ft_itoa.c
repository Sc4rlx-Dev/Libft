/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:11:40 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/25 22:05:27 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_to_alloc(int n)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = n;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	if (tmp > 0)
		return (i);
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	tmp;

	len = how_many_to_alloc(n);
	tmp = (long)n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	if (tmp < 0)
	{
		tmp = -tmp;
		str[0] = '-';
	}
	str[len--] = '\0';
	if (tmp == 0)
		str[0] = '0';
	while (tmp)
	{
		str[len] = tmp % 10 + '0';
		len--;
		tmp /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = -2147483648;
	printf("%d\n", how_many_to_alloc(n));
	printf("%s",ft_itoa(n));
}*/