/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:13:06 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/22 21:22:05 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substring = malloc(1);
		if (!substring)
			return (substring);
		substring[0] = '\0';
		return (substring);
	}
	i = 0;
	while (s[start + i] && i < len && s[i])
		i++;
	substring = malloc((i + 1) * sizeof(char));
	if (!substring)
		return (substring);
	i = 0;
	while (i < len && s[start] && start < ft_strlen(s))
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s",ft_substr("",1,1));
}*/