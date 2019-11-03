/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:30:08 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/16 20:16:42 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		nb;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = (n < 0) ? 2 : 1;
	nb = n;
	while (nb >= 10 || nb <= -10)
	{
		nb = nb / 10;
		len++;
	}
	if ((str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	str[len] = '\0';
	nb = (n < 0) ? -n : n;
	while (len-- > 0)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
