/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:01:36 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/23 02:30:31 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	count;
	int	*a;

	min = 15;
	max = 10;
	count = 0;
	a = ft_range(min, max);
	while (count < max - min)
	{
		printf("%i\n", a[count]);
		count++;
	}
}

int	*ft_range(int min, int max)
{
	int	*a;
	int	count;
	int	i;
	int	len;

	if (min >= max)
	{
		a = NULL;
		return (a);
	}
	count = min;
	i = 0;
	len = max - min;
	a = (int *)malloc(len * sizeof(int));
	while (count < max)
	{
		a[i] = count;
		count++;
		i++;
	}
	return (a);
}
