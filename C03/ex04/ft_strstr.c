/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:30:49 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/19 11:40:42 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{	
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "abcdefghijklmnop";
	char	to_find[] = "z";
	char	*result;
	
	result = ft_strstr (str, to_find);
	if (result != NULL)
	{
		printf("the result found substring = %s\n", result);
	}
	else
	{
		printf("the result not found substring");
	}
	return (0);
}*/
