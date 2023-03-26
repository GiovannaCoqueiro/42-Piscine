/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:46:17 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/23 17:08:01 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	struct s_stock_str	*temp = ft_strs_to_tab(argc, argv);

	printf("%i %s %s\n", temp->size, temp->str, temp->copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					count;
	struct s_stock_str	*temp;

	temp = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (temp == NULL)
		return (NULL);
	count = 0;
	while (count < ac)
	{
		temp[count].size = ft_strlen(av[count]);
		temp[count].str = av[count];
		temp[count].copy = ft_strdup(av[count]);
		count++;
	}
	temp[count] = (struct s_stock_str){0, 0, 0};
	return (temp);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;

	count = 0;
	dest = malloc(sizeof(src) + 1);
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
