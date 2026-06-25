/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:41:45 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/03 15:41:45 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int main(void)
{
    int x = 10;
    int y = 3;

    printf("Antes: x = %d, y = %d\n", x, y);

    ft_ultimate_div_mod(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
*/
