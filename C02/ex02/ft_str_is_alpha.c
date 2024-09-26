/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:52:21 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/16 15:34:31 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "GoodMorning";

	ft_str_is_alpha (str);
	printf("%d\n", ft_str_is_alpha(str));
}*/	
