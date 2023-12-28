/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:11:19 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/25 23:38:16 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*char_s;

	i = 0;
	char_s = (unsigned char *)s;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char s1[] ="lll";
    ft_bzero(s1,3);
}
}*/