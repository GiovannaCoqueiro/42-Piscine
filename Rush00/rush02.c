/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:31:35 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/04 21:12:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_line(int j, int x);
void	ft_last_line(int j, int x);
void	ft_central_line(int j, int x);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0)
				ft_first_line(j, x);
			else if (i == y - 1)
				ft_last_line(j, x);
			else
				ft_central_line(j, x);
			j++;
		}
		i++;
	}
}

void	ft_first_line(int j, int x)
{
	char	a;
	char	b;

	a = 'A';
	b = 'B';
	if (j == 0)
	{
		if (x == 1)
		{
			ft_putchar(a);
			write (1, "\n", 1);
		}
		else
		{
			ft_putchar(a);
		}
	}
	else if (j == x - 1)
	{
		ft_putchar(a);
		write (1, "\n", 1);
	}
	else
		ft_putchar(b);
}

void	ft_last_line(int j, int x)
{
	char	c;
	char	b;

	c = 'C';
	b = 'B';
	if (j == 0)
	{
		if (x == 1)
		{
			ft_putchar(c);
			write (1, "\n", 1);
		}
		else
		{
			ft_putchar(c);
		}
	}
	else if (j == x - 1)
	{
		ft_putchar(c);
		write (1, "\n", 1);
	}
	else
		ft_putchar(b);
}

void	ft_central_line(int j, int x)
{
	char	b;

	b = 'B';
	if (j == 0)
	{
		if (x == 1)
		{
			ft_putchar(b);
			write (1, "\n", 1);
		}
		else
		{
			ft_putchar(b);
		}
	}
	else if (j == x - 1)
	{
		ft_putchar(b);
		write (1, "\n", 1);
	}
	else
	{
		write (1, " ", 1);
	}
}
