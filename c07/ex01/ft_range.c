/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:37:34 by iezzam            #+#    #+#             */
/*   Updated: 2023/09/05 00:29:51 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == 0)
	{
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int main()
{
	int	i = 0;
    int min = 6;
    int max = 20;
    int *p = ft_range(min, max);

    if (p != 0) {
        while (i < max - min)
		{
            printf("%d ,", p[i]);
			i++;
        }
        printf("\n");
    } else {
        printf("Memory allocation or invalid input.\n");
    }

    return 0;
}*/
