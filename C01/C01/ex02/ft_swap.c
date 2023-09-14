/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:49:08 by faneves           #+#    #+#             */
/*   Updated: 2023/08/28 13:42:15 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	char	c;
	char	d;
	int	x;
	int	y;

	b = &x;
	a = &y;
	x = 5;
	y = 8;
	ft_swap(a, b);
	c = *a + '0';
	d = *b + '0';
	write(1, &c, 1);
	write(1, &d, 1);
}*/
