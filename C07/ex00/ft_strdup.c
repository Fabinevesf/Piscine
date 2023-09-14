/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:41:47 by faneves           #+#    #+#             */
/*   Updated: 2023/09/11 19:47:53 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

//fazer a strlen para saber o tamanho do dest e src
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*dest;

	i = 0;
	n = ft_strlen(src);
	dest = (char *) malloc (n * (sizeof (char) + 1));
	if (dest == NULL)
		return (0);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s", ft_strdup(argv[1]));
}*/
