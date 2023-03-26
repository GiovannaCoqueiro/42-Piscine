/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:37:50 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/13 07:42:41 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] && s2[count]) != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
