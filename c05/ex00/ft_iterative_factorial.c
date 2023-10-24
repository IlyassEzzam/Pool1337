/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:21:24 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/31 04:24:09 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}

/*int	main()
  {
  int	o = 5;
  int	p = ft_iterative_factorial(o);
  printf("%d", p);
  }*/
