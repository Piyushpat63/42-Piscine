/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:16:10 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 16:55:59 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//void	ft_print_array(int *clue_up, int *clue_dn, int *clue_lt, int *clue_rt)  
void	ft_convert_int(int *arr, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		arr[j] = str[i] - '0';
		j++;
		i += 2;
	}
}

void	ft_clue_up(int *arr, int *clue_up)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		clue_up[j] = arr[i];
		j++;
		i++;
	}
}

void	ft_clue_dn(int *arr, int *clue_dn)
{
	int	i;
	int	j;

	i = 4;
	j = 0;
	while (i <= 7)
	{
		clue_dn[j] = arr[i];
		j++;
		i++;
	}
}

void	ft_clue_lt(int *arr, int *clue_lt)
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (i <= 11)
	{
		clue_lt[j] = arr[i];
		j++;
		i++;
	}
}

void	ft_clue_rt(int *arr, int *clue_rt)
{
	int	i;
	int	j;

	i = 12;
	j = 0;
	while (i <= 15)
	{
		clue_rt[j] = arr[i];
		j++;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*str;
	int	arr[16];
	int	clue_up[4];
	int	clue_dn[4];
	int	clue_lt[4];
	int	clue_rt[4];

	*str = argv[1];
	if (argc != 2)
		return (0);
	ft_convert_int(arr, str);
	ft_clue_up(arr, clue_up);
	ft_clue_dn(arr, clue_dn);
	ft_clue_lt(arr, clue_lt);
	ft_clue_rt(arr, clue_rt);
	return (0);
}
