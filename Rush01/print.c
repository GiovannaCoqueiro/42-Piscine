/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:59:51 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/12 16:12:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_matrix(int matrix[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			if (j != SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
