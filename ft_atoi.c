/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deladia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:12:09 by deladia           #+#    #+#             */
/*   Updated: 2019/09/16 20:49:55 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	unsigned long long		nmbr;
	char					ch;

	nmbr = 0;
	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	ch = '+';
	if (*str == '-' || *str == '+')
	{
		ch = *str;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nmbr = nmbr * 10 + (*str - '0');
		str++;
	}
	if (nmbr > 9223372036854775807)
		return (ch == '-' ? 0 : -1);
	return (ch == '-' ? -nmbr : nmbr);
}
