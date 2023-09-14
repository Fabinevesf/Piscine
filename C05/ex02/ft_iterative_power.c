/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:02:10 by faneves           #+#    #+#             */
/*   Updated: 2023/09/09 17:35:06 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	n = 2;
	int	p = 10;
	
	printf("%d ", ft_iterative_power(n, p));
	printf("%d ", ft_iterative_power(0, 0));
	printf("%d ", ft_iterative_power(0, 2));
	printf("%d ", ft_iterative_power(2, 0));
	printf("%d ", ft_iterative_power(-2, 3));
	printf("%d ", ft_iterative_power(3, -2));
	printf("%d ", ft_iterative_power(-0, 2));
	printf("%d ", ft_iterative_power(-2, 31));
}
