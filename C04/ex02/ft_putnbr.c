/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:04:52 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/19 12:58:02 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		a = nb + '0';
		write(1, &a, 1);
	}
	else
	{
		b = (nb % 10) + '0';
		ft_putnbr(nb / 10);
		write (1, &b, 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = 6377;
	ft_putnbr (n);
	return (0);
}*/
