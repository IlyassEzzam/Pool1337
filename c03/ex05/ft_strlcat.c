/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:55:30 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/29 02:31:26 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0' && j < size)
	{
		j++;
	}
	while (src[i] != '\0' && j + i + 1 < size)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (j < size)
	{
		dest[j + i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i + j);
}
/*int main()
  {
  char src[] = "ilyass kaneki";
  char dest[] = "one piece ";

// unsigned int i = sizeof(src) / sizeof(src[50]);
unsigned int result_length = ft_strlcat(dest, src, 40);

printf("%s\n", dest);
printf("Result Length: %u\n", result_length);

return 0;
}*/
