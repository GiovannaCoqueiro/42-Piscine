/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:59:29 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/22 13:59:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	while (count <= nb / 2)
	{
		if ((nb % count) != 0)
			count++;
		else if ((nb % count) == 0)
			return (0);
	}
	return (1);
}
