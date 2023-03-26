/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:03:44 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/13 10:07:23 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_skyscraper	g_observers;

int	main(int argc, char **argv)
{
	if (argc != 2 || ft_valid_arg(argv[1], &g_observers) != 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (generate_matrix() == false)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
