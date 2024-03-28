/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:20:29 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:55 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(dst) >= destsize)
	{
		return (ft_strlen(dst) + ft_strlen(src));
	}
	j = ft_strlen(dst);
	i = 0;
	while (src[i] && i < destsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
