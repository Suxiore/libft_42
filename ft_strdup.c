/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:20:12 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:51:04 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy_s;
	size_t	i;

	if (!s)
		return (NULL);
	copy_s = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy_s[i] = s[i];
		i++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
