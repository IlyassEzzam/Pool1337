/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:41:53 by iezzam            #+#    #+#             */
/*   Updated: 2023/09/07 00:50:33 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	i = 0;
	if (!src)
		return (0);
	len = ft_len(src);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*result;

	i = 0;
	result = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!result)
		return (0);
	while (i < ac)
	{
		result[i].size = ft_len(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}
