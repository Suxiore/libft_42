/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:20:07 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:51:06 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
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
