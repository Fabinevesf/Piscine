/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:48:16 by faneves           #+#    #+#             */
/*   Updated: 2023/09/11 20:57:10 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*n;

	if (min >= max)
	{
		n = NULL;
		return (0);
	}
	i = max - min;
	n = (int *) malloc (i * sizeof (int));
	if (n == NULL)
		return (-1);
	*range = n;
	i = 0;
	while (max > min)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	int	i = 0;
	int	*arr;
	int	size;
	(void) argc;

	size = ft_ultimate_range(&arr, atoi(argv[1]), atoi(argv[2]));
	while (i < size)
	{
		printf("%i ", arr[i]);
		i++;
	}
	return (0);
}*/
