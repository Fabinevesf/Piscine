/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:05:31 by faneves           #+#    #+#             */
/*   Updated: 2023/08/29 19:26:06 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	x;

	x = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[x];
		tab[x] = temp;
		i++;
		x--;
	}
}
/*int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 10);

int f = 0;
while(f < 10){
	printf("%i\n", tab[f]);
f++;
}}*/
