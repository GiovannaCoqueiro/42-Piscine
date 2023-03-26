/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:44:07 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/12 16:12:54 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdbool.h>
# include <unistd.h>

# define SIZE 4
# define FATORIAL 24

typedef struct s_skyscraper
{
	char			colup[SIZE];
	char			coldown[SIZE];
	char			rowleft[SIZE];
	char			rowright[SIZE];
}					t_skyscraper;

extern t_skyscraper	g_observers;

int					ft_valid_arg(char *argv, t_skyscraper *col_row);
bool				validate(int skyscrapers[SIZE], int first_observer,
						int second_observer);
bool				validate_matrix(int matrix[SIZE][SIZE]);
void				print_matrix(int matrix[SIZE][SIZE]);
void				create_zero_matrix(int matrix[SIZE][SIZE]);
bool				generate_matrix(void);
int					verify_posibilities(int i, int j, int k, int l);

#endif
