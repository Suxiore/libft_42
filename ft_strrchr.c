/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:21:02 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:45 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && str[i] != c)
	{
		i--;
	}
	if (str[i] == c)
	{
		return ((char *)(str + i));
	}
	else
	{
		return (NULL);
	}
}
