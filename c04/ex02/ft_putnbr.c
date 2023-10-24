/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 02:32:38 by iezzam            #+#    #+#             */
/*   Updated: 2023/08/29 20:47:46 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

/*int main()
  {
  int	num3 = 0;
  int	num4 = 67896966;
  int	num9 = -906675566;
  int	num6 = 4;
  int	num7 = 42;
  int	num8 = -42;
  int	num5 = -2147483648;
  ft_putnbr(num3);
  ft_putchar('\n');
  ft_putnbr(num4);
  ft_putchar('\n');
  ft_putnbr(num5);
  ft_putchar('\n');
  ft_putnbr(num6);
  ft_putchar('\n');
  ft_putnbr(num7);
  ft_putchar('\n');
  ft_putnbr(num8);
  ft_putchar('\n');
  ft_putnbr(num9);
  ft_putchar('\n');
  }*/
