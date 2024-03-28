/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ootakhor <ootakhor@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:19:44 by ootakhor          #+#    #+#             */
/*   Updated: 2024/03/28 10:51:14 by ootakhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*

#include <unistd.h>
int main()
{
    char *message = "Cantami o Diva l'ira del Pelide Achille";
    int fd = STDOUT_FILENO; // Output to standard output

    ft_putendl_fd(message, fd);

    return (0);
}
*/
