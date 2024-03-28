/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:04:11 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 19:20:08 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *str, int len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = len -1;
	if (str == NULL || len <= 0)
		return ;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char			digit[12];
	char			*final;
	signed char		sign;
	unsigned int	new;

	sign = 1;
	if (n < 0)
		sign = -1;
	new = n * sign;
	ft_memset(digit, 0, 12);
	n = 0;
	if (new == 0)
		digit[n++] = 0 + '0';
	while (new != 0)
	{
		digit[n++] = new % 10 + '0';
		new = new / 10;
	}
	if (sign < 0)
		digit[n] = '-';
	ft_reverse(digit, n + 1);
	final = ft_strdup(digit);
	if (!final)
		return (NULL);
	return (final);
}
