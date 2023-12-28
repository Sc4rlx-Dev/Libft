/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:12:00 by oer-raou          #+#    #+#             */
/*   Updated: 2023/12/27 03:05:20 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	i;
	i = open("scarlx.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('y', i);
	close (i);
}*/