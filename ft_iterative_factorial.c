/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deladia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:31:00 by deladia           #+#    #+#             */
/*   Updated: 2019/09/13 16:22:50 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
