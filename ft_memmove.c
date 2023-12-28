/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:11:56 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/22 19:51:58 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*char_src;
	unsigned char	*char_dst;

	i = 0;
	if (!dst && !src)
		return (NULL);
	char_src = (unsigned char *)src;
	char_dst = (unsigned char *)dst;
	if (char_dst > char_src)
	{
		while (len--)
			char_dst[len] = char_src[len];
	}
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[10] = "scarlx";

	printf("%s\n",ft_memmove(s,s+2,6));
	printf("%s",memmove(s,s+2,6));
}*/