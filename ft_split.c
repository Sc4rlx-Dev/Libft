/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:12:11 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/22 21:20:57 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		i;
	char	flag;
	int		count;

	i = 0;
	flag = c;
	count = 0;
	while (s && s[i])
	{
		if (flag == c && s[i] != c)
			count++;
		flag = s[i];
		i++;
	}
	return (count);
}

static int	c_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*word(char const *s, char **strings, int index, char c)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * (c_char(s, c) + 1));
	if (!p)
	{
		if (index)
		{
			while (index--)
				free(strings[index]);
		}
		free(strings);
		return (NULL);
	}
	while (s[i] != c && s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		string_index;

	if (!s)
		return (NULL);
	strings = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strings)
		return (NULL);
	string_index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			strings[string_index] = word(s, strings, string_index, c);
			if (!strings[string_index])
				return (NULL);
			string_index++;
		}
		while (*s && *s != c)
			s++;
	}
	strings[string_index] = NULL;
	return (strings);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "to be ot not to be";
	char **str = ft_split(s,' ');
	int count = count_words(s,' ');
	printf("%d\n",count);
	for (int i = 0; i < count ; i++)
		printf("%s\n",str[i]);
}*/