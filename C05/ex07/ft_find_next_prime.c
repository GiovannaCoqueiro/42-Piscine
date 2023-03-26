/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:59:23 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/22 13:59:56 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	while (count <= nb / 2)
	{
		if ((nb % count) != 0)
			count++;
		else if ((nb % count) == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
