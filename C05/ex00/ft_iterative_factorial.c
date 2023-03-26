/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:00:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/22 14:00:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (count > 1)
	{
		nb = nb * (count - 1);
		count--;
	}
	return (nb);
}
