/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:03:09 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/22 21:32:07 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dst;
	char		*sr;
	size_t		i;

	dst = (char *)dest;
	sr = (char *)src;
	i = 0;
	if (len == 0 || dest == src)
		return (dst);
	if (dest > src)
	{
		while (len--)
			dst[len] = sr[len];
	}
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	return (dest);
}
