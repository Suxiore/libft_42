/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:21:08 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:43 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	trimmed = (char *)malloc(len * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
