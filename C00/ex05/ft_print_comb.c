/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:13:21 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/07 19:40:07 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_c(char a, char b, char c);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				ft_print_c(a, b, c);
				c++;
			}
			b++;
		}
	a++;
	}
}

void	ft_print_c(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &c, 1);
		write(1, ", ", 2);
	}
}
