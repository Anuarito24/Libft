/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:49:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/12 20:15:02 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*str;
	size_t				i;

	dst = dest;
	str = src;
	i = 0;
	while (i < n)
	{
		dst[i] = str[i];
		if (str[i] == (unsigned char)c)
		{
			dst[i] = str[i];
			return (&dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}
