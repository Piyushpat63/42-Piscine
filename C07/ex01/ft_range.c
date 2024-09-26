/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:42:54 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/22 18:07:32 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	result = (int *)malloc (sizeof (int) * size);
	if (! result)
		return (0);
	i = 0;
	while (i < size)
	{
		result [i] = min + i;
		i++;
	}
	return (result);
}
/*
int	main()
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min = 6;
	max = 63;
	result = ft_range(min, max);
	i = 0;
	while (i < max-min)
	{
		printf ("%d, ", result[i]);
		i++;
	}
	return 0;
}*/
