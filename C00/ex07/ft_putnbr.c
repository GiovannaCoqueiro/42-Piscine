/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:13:42 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/08 04:16:39 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		a = (nb % 10 + '0');
		write (1, &a, 1);
		write (1, "\n", 1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		a = (nb + '0');
		write (1, &a, 1);
		write (1, "\n", 1);
	}
	else
	{
		write (1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
