/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:03:04 by faneves           #+#    #+#             */
/*   Updated: 2023/09/12 22:41:39 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*x;

	if (min >= max)
		return (NULL);
	i = max - min;
	x = (int *)malloc(sizeof(int) * (i));
	if (x == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}
/*
int	main(int argc, char *argv[])
{
	int i = 0; 
	int size = 99;
	(void) argc;
	int	*x; 
	
	x = ft_range(atoi(argv[1]), atoi(argv[2]));

	if (x == NULL) 
		return (1);
	while (i < size)
	{
		printf("%i\n", x[i++]); 
	}
	return(0);
}*/
