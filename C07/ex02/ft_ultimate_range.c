/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:48:52 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/23 16:46:02 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	count = 0;
	range = malloc(len * sizeof(int));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		range[count] = &min;
		printf("%i\n", *range[count]);
		count++;
		min++;
	}
	return (len);
}
