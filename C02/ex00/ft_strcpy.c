/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:23:22 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/17 15:11:21 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Good Morning";
	char	dest[100] = {};
	int	i;

	ft_strcpy(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write (1, &dest[i], 1);
		i++;
	}
	return (0);
}*/
