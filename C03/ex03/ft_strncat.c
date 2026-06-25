/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:17:56 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/08 20:17:57 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && (unsigned char)src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char dest[50] = "Funcionou ";
	char src[] = "isso!";

	printf("%s\n", ft_strncat(dest, src, 1));
	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", ft_strncat(dest, src, 6));
}*/
