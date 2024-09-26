/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:15:39 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/23 12:01:14 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}	
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 5;
	max = 0;
	printf("the size of range is %d\n", ft_ultimate_range(&range, min, max));
	i = 0;
	while (i < max-min)
	{
		printf("%d ", range[i]);
		i++;	
	}
	return (0);
}*/
