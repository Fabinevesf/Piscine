/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:57:46 by faneves           #+#    #+#             */
/*   Updated: 2023/09/11 22:52:09 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		j;
	int		count;

	str = (char *) malloc(sizeof (strs));
	if (str == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			str[j + count] = strs[i][j];
		count = count + j;
		j = -1;
		while ((sep[++j] != '\0') && (++i < size))
			str[j + count] = sep[j];
		count = count + j;
	}
	str[count + 1] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *arr[] = {"Ola", "Bom", "Dia", "Doida", "Louca"};

	printf("%s\n", ft_strjoin(5, arr, " "));
}*/
