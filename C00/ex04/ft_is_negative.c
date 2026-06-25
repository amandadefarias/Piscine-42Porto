/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fari <ade-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:50:00 by ade-fari          #+#    #+#             */
/*   Updated: 2026/01/29 20:50:00 by ade-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	number;

	if (n >= 0)
	{
		number = 'P';
		write(1, &number, 1);
	}
	else
	{
		number = 'N';
		write(1, &number, 1);
	}
}
/*
int main(void)
{
	ft_is_negative(2);
	ft_is_negative(0);
	ft_is_negative(-9);
	return(0);
}
*/
