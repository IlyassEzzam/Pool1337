/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:23:36 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/31 05:50:00 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main()
{
	int	nb = 2;
	int	power = 5;
	int resu = ft_recursive_power(nb, power);

	printf("nb= %d\npower= %d\n", nb, power);
	printf("\n\nresult =>%d", resu);
}*/
