/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:38:03 by iezzam            #+#    #+#             */
/*   Updated: 2023/09/05 00:37:17 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == 0)
	{
		return (-1);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}

/*int main()
{
    int i = 0;
    int min = 6;
    int max = 20;
    int *p = NULL; // Initialize p to NULL

    int size = ft_ultimate_range(&p, min, max);

    if (size >= 0)
    {
		i = 0;
		printf("size range =  %d\n range =", size);
		while (i < size) // Use size as the limit
        {
            printf(" %d | ", p[i]);
			i++;
        }
        printf("\n");
        free(p); // Free the allocated memory when done
    }
    else
    {
        printf("Memory allocation or invalid input.\n");
    }

    return 0;
}*/
