/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:22:51 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/31 04:19:43 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resu;

	resu = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		resu = resu * nb;
		power--;
	}
	return (resu);
}

/*int	main()
{
	int	nb = 2;
	int	power = 5;
	int resu = ft_iterative_power(nb, power);
	
	printf("nb= %d\npower= %d\n", nb, power);
	printf("\n\nresult =>%d", resu);
}*/
