/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:57:32 by faneves           #+#    #+#             */
/*   Updated: 2023/09/10 20:47:39 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(-1));
	printf("%d", ft_iterative_factorial(1));
	printf("%d", ft_iterative_factorial(2));
	printf("%d", ft_iterative_factorial(4));
	printf("%d", ft_iterative_factorial(6));
}
