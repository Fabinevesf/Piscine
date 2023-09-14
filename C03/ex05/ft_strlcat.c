/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:09:40 by faneves           #+#    #+#             */
/*   Updated: 2023/09/09 16:09:53 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>*/

int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= lendest)
	{
		return (size + lensrc);
	}
	while (i < (size - 1 - lendest) && src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}
/*
int	main(void)
{
	char	src[10] = "Fabiana";
	char	dest[10] = "ola";
    
	printf("%i ", ft_strlcat(dest, src, 0));
	return (0);
}*/
