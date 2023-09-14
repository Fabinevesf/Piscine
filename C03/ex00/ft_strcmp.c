/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:53:35 by faneves           #+#    #+#             */
/*   Updated: 2023/09/05 20:10:27 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main( int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d ", ft_strcmp(argv[1], argv[2]));
}*/
