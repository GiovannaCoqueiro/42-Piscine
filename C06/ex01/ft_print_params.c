/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 04:37:32 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/20 22:41:28 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count_argc;
	int	count_argv;

	if (argc <= 1)
		return (0);
	count_argc = 1;
	while (count_argc < argc)
	{
		count_argv = 0;
		while (argv[count_argc][count_argv] != '\0')
		{
			write (1, &argv[count_argc][count_argv], 1);
			count_argv++;
		}
		write (1, "\n", 1);
		count_argc++;
	}
	return (0);
}
