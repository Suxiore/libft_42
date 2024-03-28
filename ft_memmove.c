/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:19:30 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:49:14 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	if (n == 0)
		return (dst);
	if (dst > src)
	{
		i = n -1;
		while (i < n)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
