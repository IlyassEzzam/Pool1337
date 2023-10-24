/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:59:36 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/28 18:31:32 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (dest[j] != '\0')
	{
		j++;
	}
	return (j);
}

/*int	main()
{
	char dest[100];
	char src[] = "olo";

	 unsigned int result = ft_strlcpy(dest, src, 2);
    printf("Copied string: %s\n", dest);
    printf("Total characters copied: %u\n", result);
    
    return 0;
}*/
