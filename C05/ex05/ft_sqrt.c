/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:22:52 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/18 16:55:50 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= nb / i)
	{
		res = i * i;
		if (res == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("The sq root of given number is = %d\n", ft_sqrt(45));
	return (0);
}*/
