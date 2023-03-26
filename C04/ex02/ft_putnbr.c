/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:38:49 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/14 15:39:48 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(214748364);
		write(1, "8", 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		a = (nb % 10 + '0');
		write(1, &a, 1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		a = (nb + '0');
		write(1, &a, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
