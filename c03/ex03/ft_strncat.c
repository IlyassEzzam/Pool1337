/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:29:18 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/28 14:29:05 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}

/*int	main()
{
	char src[] = "";
	char dest[7] = "oooooo";

	ft_strncat(dest,src, 8);
	printf("%s", dest);
}*/
