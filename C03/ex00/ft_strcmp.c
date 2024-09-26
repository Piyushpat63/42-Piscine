/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:00:05 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/18 11:47:59 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	d;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
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
	char	s1[] = "ab";
	char	s2[] = "abc";

	ft_strcmp (s1, s2);
	printf ("%d\n", ft_strcmp (s1, s2));
	return (0);
}*/
