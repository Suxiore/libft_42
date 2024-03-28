/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:21:14 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:49 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(*s));
	if (!ptr)
		return (NULL);
	a = start;
	b = 0;
	while (s[a] && b < len)
	{
		ptr[b] = s[a];
		b++;
		a++;
	}
	ptr[b] = '\0';
	return (ptr);
}
