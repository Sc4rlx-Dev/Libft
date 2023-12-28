/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:12:17 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/22 21:21:05 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = malloc((ft_strlen(s1) + 1) * sizeof(unsigned char));
	if (s2 == NULL)
		return (s2);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s",strdup(NULL));
	//printf("%s",ft_strdup(NULL));
}*/