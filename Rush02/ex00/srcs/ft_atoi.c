/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:36:12 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 13:36:16 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' \
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}
