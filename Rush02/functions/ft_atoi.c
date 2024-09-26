/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:30:38 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/22 15:22:50 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_atoi(char *str, int *sz)
{
	int	i;
	int	s;
	int	k;
	int	size;
	int	*num;

	i = 0;
	s = 1;
	k = 0;
	size = ft_num_len(str);
	num = (int *) malloc(sizeof(int) * (size + 1));
	if (num == NULL)
		return (0);
	*sz = size;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32)
		|| (str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num[k] = str[i] - '0';
		i++;
		k++;
	}
	return (num);
}
