/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:41:06 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/13 10:20:32 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool	validate(int skyscrapers[SIZE], int first_observer, int second_observer)
{
	int	i;
	int	first_count;
	int	second_count;

	i = 0;
	first_count = 1;
	while (i < SIZE - 1)
	{
		if (skyscrapers[i] == SIZE)
			break ;
		if (skyscrapers[i] < skyscrapers[i + 1])
			first_count++;
		i++;
	}
	i = SIZE - 1;
	second_count = 1;
	while (i > 0)
	{
		if (skyscrapers[i] == SIZE)
			break ;
		if (skyscrapers[i] < skyscrapers[i - 1])
			second_count++;
		i--;
	}
	return (first_count == first_observer && second_count == second_observer);
}

bool	is_diff(int skyscrapers[SIZE])
{
	if (((skyscrapers[0] - skyscrapers[1]) != 0 && (skyscrapers[1]
				- skyscrapers[2]) != 0 && (skyscrapers[2]
				- skyscrapers[3]) != 0))
		return (true);
	return (false);
}

bool	validate_matrix(int matrix[SIZE][SIZE])
{
	int	i;
	int	j;
	int	colunm[SIZE];

	i = 0;
	while (i < SIZE)
	{
		if (!validate(matrix[i], g_observers.rowleft[i],
				g_observers.rowright[i]))
			return (false);
		i++;
	}
	j = 0;
	while (j < SIZE)
	{
		i = -1;
		while (++i < SIZE)
			colunm[i] = matrix[i][j];
		if (!validate(colunm, g_observers.colup[j], g_observers.coldown[j])
			&& is_diff(colunm))
			return (false);
		j++;
	}
	return (true);
}

int	ft_valid_arg(char *argv, t_skyscraper *col_row)
{
	int		count;
	char	*pointer_col_row;

	count = 0;
	pointer_col_row = &col_row->colup[0];
	while (argv[count] != '\0')
	{
		if (count % 2 != 0)
		{
			if (argv[count++] == ' ')
			{
				continue ;
			}
			else
				return (1);
		}
		else if ((argv[count] < '1') || (argv[count] > '4'))
			return (1);
		*pointer_col_row = argv[count] - '0';
		pointer_col_row++;
		count++;
	}
	if (count != 31)
		return (1);
	return (0);
}
