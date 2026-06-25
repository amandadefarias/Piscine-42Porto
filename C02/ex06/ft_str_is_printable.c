/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:39:13 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/05 20:39:15 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello!"));
	printf("%d\n", ft_str_is_printable("42 Porto"));
	printf("%d\n", ft_str_is_printable("Hi\n"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}*/
