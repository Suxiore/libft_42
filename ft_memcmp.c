/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:19:18 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:49:11 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char) *(str1 + i)) != \
		((const unsigned char) *(str2 + i)))
		{
			return (((const unsigned char) *(str1 + i)));
		}
		i++;
	}
	return (0);
}
*/

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)ptr1;
	b2 = (unsigned char *)ptr2;
	while (n-- > 0)
	{
		if (*b1 == *b2)
		{
			b1++;
			b2++;
		}
		else
			return (*b1 - *b2);
	}
	return (0);
}