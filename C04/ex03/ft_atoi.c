/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:57:27 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/18 15:04:55 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	sign = 1;
	result = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10;
		result += str[count] - '0';
		count++;
	}
	return (sign * result);
}
