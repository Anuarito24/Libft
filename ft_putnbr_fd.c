/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:33:35 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/14 01:26:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char res;

	res = 0;
	if (nb == -2147483648)
	{
		write(fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		res = nb % 10 + '0';
		write(fd, &res, 1);
	}
	else
	{
		res = nb + '0';
		write(fd, &res, 1);
	}
}
