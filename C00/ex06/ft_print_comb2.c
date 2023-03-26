/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:13:34 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/05 14:04:50 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = (a / 10 + '0');
	j = (a % 10 + '0');
	k = (b / 10 + '0');
	l = (b % 10 + '0');
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, " ", 1);
	write (1, &k, 1);
	write (1, &l, 1);
	if (a != 98)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
