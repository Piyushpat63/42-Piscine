/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:29:13 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/20 10:16:12 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < nb)
	{
		if (nb % i != 0)
		{
			i++;
		}
		else
			return (ft_find_next_prime (nb + 1));
	}
	return (nb);
}
/*
int	main(void)
{
	int	res;
	int	n;

	n = 678;
	res = ft_find_next_prime(n);
	printf("The next prime number is = %d", res);
	return (0);
}*/
