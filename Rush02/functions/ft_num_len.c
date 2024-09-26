/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:32:07 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/22 15:32:15 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_num_len(char *str)
{
	int	l;
	int	i;
	int	s;

	s = 0;
	i = 0;
	l = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			s++;
		if ((str[i] >= '0') && (str[i] <= '9'))
			l++;
		i++;
	}
	if (s % 2 != 0)
	{	
		write (1, "Enter Positive number only\n", 27);
		return (0);
	}
	else
		return (l);
}
