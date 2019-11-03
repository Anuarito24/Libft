/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:23:21 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/16 19:37:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ar;
	unsigned char	ch;

	ar = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*ar++ == ch)
			return (--ar);
		n--;
	}
	return (NULL);
}
