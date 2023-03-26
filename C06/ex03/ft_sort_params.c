/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:50:20 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/20 22:50:41 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);
void	ft_print(int argc, char **argv);
int		ft_sort(int temp, int c_argc, int argc, char **argv);

int	main(int argc, char **argv)
{
	int	c_argc;
	int	temp;
	int	exit;

	if (argc <= 1)
		return (0);
	c_argc = 1;
	temp = 0;
	exit = ft_sort(temp, c_argc, argc, argv);
	ft_print(argc, argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] && s2[count]) != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

void	ft_swap(char **a, char **b)
{
	char	*backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

void	ft_print(int argc, char **argv)
{
	int	count_argc;
	int	count_argv;

	count_argc = 1;
	while (count_argc < argc)
	{
		count_argv = 0;
		while (argv[count_argc][count_argv] != '\0')
		{
			write(1, &argv[count_argc][count_argv], 1);
			count_argv++;
		}
		write(1, "\n", 1);
		count_argc++;
	}
}

int	ft_sort(int temp, int c_argc, int argc, char **argv)
{
	int	exit;
	int	swap;

	swap = 0;
	exit = 0;
	while (exit == 0 && c_argc < argc - 1)
	{
		temp = ft_strcmp(argv[c_argc], argv[c_argc + 1]);
		if (temp > 0)
		{
			ft_swap(&argv[c_argc], &argv[c_argc + 1]);
			swap = 1;
		}
		c_argc++;
		if (c_argc >= argc - 1)
		{
			c_argc = 1;
			if (swap == 0)
				exit = 1;
			swap = 0;
		}
	}
	return (exit);
}
