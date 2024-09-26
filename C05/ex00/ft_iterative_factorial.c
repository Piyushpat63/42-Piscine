/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:21:38 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/20 12:39:52 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	res;

	n = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (n <= nb)
	{
		res = res * n;
		n++;
	}	
	return (res);
}
/*
int	main(void)
{
	int	n = -6;

	printf("The factorial number of %d is = %d ", n, ft_iterative_factorial(n));
	return (0);
}*/
