/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:55:14 by faneves           #+#    #+#             */
/*   Updated: 2023/09/09 16:33:57 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	int	n = 2;
	int	p = 10;
	
	printf("%d ", ft_recursive_power(n, p));
	printf("%d ", ft_recursive_power(0, 0));
	printf("%d ", ft_recursive_power(0, 2));
	printf("%d ", ft_recursive_power(2, 0));
	printf("%d ", ft_recursive_power(-2, 3));
	printf("%d ", ft_recursive_power(3, -2));
	printf("%d ", ft_recursive_power(-0, 2));
	printf("%d ", ft_recursive_power(-2, 31));
}
