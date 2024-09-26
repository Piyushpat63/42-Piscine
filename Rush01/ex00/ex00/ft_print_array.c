/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:09:47 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 10:11:58 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_print_array()
{
	int	col;
	int	row;
	col = 0;

	int	k = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			printf("%d",k);
			row++;
			k++;
		}
		printf("\n");
		col++;
	}
	return 0;
}
