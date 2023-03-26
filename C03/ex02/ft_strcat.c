/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 07:52:53 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/19 09:56:18 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	count_src;

	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	count_src = 0;
	while (src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
