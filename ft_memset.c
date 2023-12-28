/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:11:58 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/27 21:16:15 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*char_b;

	i = 0;
	char_b = (unsigned char *)b;
	while (i < len)
	{
		char_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	int arr[4] = {43, 54, 476, 9};
// 	int a = 0;
// 	void *b = &a;	
// 	ft_memset(b ,210);
// 	ft_memset(b +1, 7);
// 	printf("%d", b )
// }