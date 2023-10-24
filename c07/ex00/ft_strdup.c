/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:37:05 by iezzam            #+#    #+#             */
/*   Updated: 2023/09/05 00:26:57 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[size])
	{
		size++;
	}
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == 0)
	{
		return (0);
	}
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
	char il[] = "ilyass";
	char *duplicat = ft_strdup(il);

	if (duplicat != 0)
	{
		printf("original : %s\n", il);
		printf("duplicat : %s \n", duplicat);
	}
	else
		printf("Memory allocation failed\n");
}*/
