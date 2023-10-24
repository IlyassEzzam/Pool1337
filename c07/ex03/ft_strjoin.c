/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:38:30 by iezzam            #+#    #+#             */
/*   Updated: 2023/09/06 04:58:37 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		g_ft_size;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*get_str(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		sep_len;
	int		str_len;

	str_len = 0;
	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
	{
		str_len += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * (str_len + sep_len));
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		i;
	char	*str;

	str = get_str(size, strs, sep);
	g_ft_size = 0;
	i = 0;
	while (g_ft_size < size)
	{
		j = 0;
		while (strs[g_ft_size][j])
		{
			str[i++] = strs[g_ft_size][j];
			j++;
		}
		j = 0;
		while (sep[j] && g_ft_size != size - 1)
		{
			str[i++] = sep[j];
			j++;
		}
		g_ft_size++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char *strs[] = {"Hello", "World", "123"};
  	char *sep = ",+";
  	char *result = ft_strjoin(3, strs, sep);

  	if (result != NULL)
  	{
  	printf("Concatenated string: %s\n", result);
  	free(result);
  	}
  	else
  	{
 	 printf("Memory allocation failed\n");
  	}

  	return 0;
}*/
