/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:12:23 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/22 21:21:15 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		n;

	if (!s1 || !s2)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc((n + 1) * sizeof(char));
	if (new_s == NULL)
		return (new_s);
	ft_strlcpy(new_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_s, s2, n + 1);
	return (new_s);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strjoin(NULL, "ait"));
}*/
