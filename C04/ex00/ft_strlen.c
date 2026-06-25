/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:28:54 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/08 21:28:56 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
	char *teste1 = "oi";
	char *teste2 = "eai";
	char *teste3 = "xuxu";

	printf("%d\n", ft_strlen(teste1));
	printf("%d\n", ft_strlen(teste2));
	printf("%d\n", ft_strlen(teste3));
	return (0);
}*/
