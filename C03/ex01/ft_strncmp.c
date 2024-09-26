/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:26:46 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/19 11:39:21 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				d;

	i = 0;
	d = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			return (d);
		}
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	n;

	n = 3;
	char	s1[] = "ABiCD";
	char	s2[] = "ABCD:v";
	printf("%d\n", ft_strncmp (s1, s2, n));
	return (0);
}*/
