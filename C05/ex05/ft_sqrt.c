/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:08:10 by faneves           #+#    #+#             */
/*   Updated: 2023/09/09 18:24:37 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(long nb)
{
	int	i;

	i = 1;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int	main(void)
{
	int	i = 9;

	printf("%d ", ft_sqrt(1));
	printf("%d ", ft_sqrt(0));
	printf("%d ", ft_sqrt(-1));
	printf("%d ", ft_sqrt(-4));
	printf("%d ", ft_sqrt(2147395600));
	printf("%d ", ft_sqrt(2147395601));
	printf("%d ", ft_sqrt(2147488281));
}
