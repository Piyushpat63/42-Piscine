/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:42:17 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/24 17:09:00 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(int num, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < num)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			len++;
			i++;
		}
		j++;
	}	
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (len + 3 * i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		j;
	char	*res;

	j = 0;
	len = ft_strlen(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (! res)
		return (NULL);
	*res = '\0';
	while (j < size)
	{
		res = ft_strcat(res, strs[j]);
		if (j < size - 1)
			res = ft_strcat(res, sep);
		j++;
	}
	return (res);
}
/*
int	main(void)
{
	char	**strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 15);
	strs[1] = (char *)malloc(sizeof(char) * 15);	
	strs[2] = (char *)malloc(sizeof(char) * 15);
	strs[3] = (char *)malloc(sizeof(char) * 15);
		
	strs[0] = "First";
	strs[1] = "Second";
	strs[2] = "Third";
	strs[3] = "Fourth";
	char	*sep = ", ";

	char	*result = ft_strjoin(4, strs, sep);
	printf("%s\n", result);
	return (0);
}*/
