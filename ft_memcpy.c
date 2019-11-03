/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:44:43 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/18 23:47:46 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*s;

	i = 0;
	dest = (char *)dst;
	s = (char *)src;
	if ((!dst && !src) || !n)
		return (dst);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	return (dst);
}
