/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:35:31 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/21 11:56:51 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;

	n = 0;
	s = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')
		|| (str[i] == '+') || (str[i] == '-'))
	{
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				s++;
		}
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
		n = n * 10 + (str[i++] - '0');
	if (s % 2 != 0)
		return (-n);
	else
		return (n);
}

int	main(void)
{
	printf(" The result is =%d\n", ft_atoi(" - -  ---+--+1234ab567"));
	return (0);
}
