/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:13:03 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/26 13:18:06 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	const char	*end;
	size_t		trimmed_len;
	char		*trimmed;

	if (s == NULL || set == NULL)
		return (NULL);
	while (*s && is_in_set(*s, set))
		s++;
	end = s + ft_strlen(s) - 1;
	while (end > s && is_in_set(*end, set))
		end--;
	trimmed_len = (end - s) + 1;
	trimmed = malloc(trimmed_len + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strncpy(trimmed, (char *)s, trimmed_len);
	trimmed[trimmed_len] = '\0';
	return (trimmed);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s",ft_strtrim("  scarlx   "," "));
}*/
/*
#include <stdio.h>

int	main(void)
{
	printf("%s",ft_strtrim("  scarlx   "," "));
}*/