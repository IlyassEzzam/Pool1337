/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 02:41:09 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/28 15:19:35 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	return (sign * number);
}

/*int	main()
{
	char str[] = " ---+--+1234ab567";

	int	i = ft_atoi(str);
	printf("%d", i);
}*/
