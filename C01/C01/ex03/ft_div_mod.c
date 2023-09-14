/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:43:34 by faneves           #+#    #+#             */
/*   Updated: 2023/08/29 19:27:04 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b; 
}
/*int	main(void)
{
	int	a;
	int	b;
	int*	div;
	int*	 mod;
	int	d;
	int	m;

	a = 10;
	b = 3;
	div = &d;
	mod = &m;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d\n", *div, *mod);
}*/
