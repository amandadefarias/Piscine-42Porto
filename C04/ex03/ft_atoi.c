/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:52:57 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/12 17:52:59 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	conv;
	int	sinal;

	i = 0;
	conv = 0;
	sinal = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = conv * 10 + (str[i] - '0');
		i++;
	}
	return (conv * sinal);
}
/*int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("   +++--42abc"));
	printf("%d\n", ft_atoi(" \t\n -+-+-+0010"));
	return (0);
}*/
