/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:59:33 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/16 20:32:53 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((size + 1) == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
