/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:27:36 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/07 17:27:41 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("12345"));   // deve imprimir 1
	printf("%d\n", ft_str_is_numeric("12a45"));   // deve imprimir 0
	printf("%d\n", ft_str_is_numeric(""));        // deve imprimir 1
	printf("%d\n", ft_str_is_numeric("42"));      // deve imprimir 1
	printf("%d\n", ft_str_is_numeric("4 2"));     // deve imprimir 0
	return (0);
}*/
