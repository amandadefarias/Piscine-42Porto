/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:23:43 by ade-fari          #+#    #+#             */
/*   Updated: 2026/02/02 21:23:43 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a = 15;
	int	b = 35;

	printf("Before ft_swap:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	//troca os valores 
	ft_swap(&a, &b);

	printf("\nAfter ft_swap: \n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}
*/
