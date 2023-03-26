/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:51:10 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/13 10:04:05 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		g_posibilities[FATORIAL][SIZE] = {
{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 2, 3},
{1, 4, 3, 2}, {2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1},
{2, 4, 1, 3}, {2, 4, 3, 1}, {3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4},
{3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1}, {4, 1, 2, 3}, {4, 1, 3, 2},
{4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}};

bool	generate_matrix(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	while (++i < FATORIAL)
	{
		j = -1;
		while (++j < FATORIAL)
		{
			k = -1;
			while (++k < FATORIAL)
			{
				l = -1;
				while (++l < FATORIAL)
				{
					if (((i - j) || (j - k) || (k - l)) != 0)
						if (verify_posibilities(i, j, k, l) == 0)
							return (true);
				}
			}
		}
	}
	return (false);
}

int	verify_posibilities(int i, int j, int k, int l)
{
	int	matrix[SIZE][SIZE];
	int	count;

	count = 0;
	while (count < SIZE)
	{
		matrix[0][count] = g_posibilities[i][count];
		matrix[1][count] = g_posibilities[j][count];
		matrix[2][count] = g_posibilities[k][count];
		matrix[3][count] = g_posibilities[l][count];
		count++;
	}
	if (validate_matrix(matrix))
	{
		print_matrix(matrix);
		return (0);
	}
	return (1);
}
