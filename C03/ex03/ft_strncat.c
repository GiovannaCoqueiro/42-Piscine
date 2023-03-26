/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:23:14 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/03/14 07:23:24 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	count_src = 0;
	while (count_src < nb && src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
