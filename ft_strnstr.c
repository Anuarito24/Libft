/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:40:10 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/16 20:34:35 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (str[i] && i < len)
	{
		while (to_find[j] && str[i + j] == to_find[j] && ((i + j) < len))
			j++;
		if (!to_find[j])
			return ((char *)&str[i]);
		i++;
	}
	if (!to_find[0])
		return ((char *)&str[i]);
	return (NULL);
}
