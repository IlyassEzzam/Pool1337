/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:26:53 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/28 14:26:58 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
    char main_str[] = "Hello, this is a test string.";
    char sub_str[] = "is a";
    char  *result = ft_strstr(main_str, sub_str);

    if (result)
    {
        printf("Substring found at index: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}*/
