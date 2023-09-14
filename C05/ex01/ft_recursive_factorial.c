/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:52:29 by faneves           #+#    #+#             */
/*   Updated: 2023/09/09 16:36:15 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		while (nb > 0)
			return (nb = nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(-1));
	printf("%d", ft_recursive_factorial(1));
	printf("%d", ft_recursive_factorial(2));
	printf("%d", ft_recursive_factorial(4));
	printf("%d", ft_recursive_factorial(6));
}
