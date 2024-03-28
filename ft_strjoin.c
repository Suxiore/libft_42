/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:20:24 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:59 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	size_t	c;
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(s1)+ft_strlen(s2)+1) * sizeof(char));
	if (!ptr)
		return (NULL);
	a = 0;
	b = 0;
	c = 0;
	while (s1[a])
	{
		ptr[c] = s1[a];
		a++;
		c++;
	}
	while (s2[b])
	{
		ptr[c] = s2[b];
		b++;
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
