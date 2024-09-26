/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:11:09 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/18 16:51:43 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if ((nb == 0) && (power == 0))
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	n;
	int	power;
	int	result;

	n = 0;
	power = 2;
	result = ft_iterative_power(n, power);
	printf("The %d power of number %d is = %d ", power, n, result);
	return (0);
}*/
