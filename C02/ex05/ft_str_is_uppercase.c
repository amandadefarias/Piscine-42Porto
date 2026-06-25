/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:35:06 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/05 20:35:07 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("AbC"));
	printf("%d\n", ft_str_is_uppercase("ABC123"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}*/
