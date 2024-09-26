/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:38:19 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/18 12:35:27 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	 main()
{
	char src[] = "Good";
	char dest[] = "abidghgfwuiec";
	unsigned int	n;
	int	i;

	i = 0;
	n = 6;
	ft_strncpy(dest, src, n);
	while(dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return 0;
}*/
