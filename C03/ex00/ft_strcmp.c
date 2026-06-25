/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:42:32 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/07 21:42:34 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int main(void)
{
	char *a = "Hello";
	char *b = "Hello";
	char *c = "Hellp";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", ft_strcmp(c, a));
}*/
