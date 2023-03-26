/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:30:48 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/05 04:48:36 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	backup_a;
	int	backup_b;

	backup_a = *a;
	backup_b = *b;
	*a = backup_a / backup_b;
	*b = backup_a % backup_b;
}
