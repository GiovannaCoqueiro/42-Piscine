/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:24:24 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/14 07:40:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	c1 = 0;
	while (str[c1] != '\0')
	{
		c2 = 0;
		while (str[c1 + c2] == to_find[c2] && to_find[c2] != '\0')
		{
			if (to_find[c2 + 1] == '\0')
				return (&str[c1]);
			c2++;
		}
		c1++;
	}
	return (0);
}
