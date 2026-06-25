/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:21:12 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/07 17:21:14 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*int     main(void)
{
        printf("%d\n", ft_str_is_lowercase("abc"));
        printf("%d\n", ft_str_is_lowercase("Abc"));
        printf("%d\n", ft_str_is_lowercase("abc123"));
        printf("%d\n", ft_str_is_lowercase(""));
        return (0);
}*/
