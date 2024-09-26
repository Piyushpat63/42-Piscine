/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:49:04 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 14:46:01 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort(int *x,	int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;
	int	flag;

	flag = 0;
	while (flag != 1)
	{
		flag = 1;
		i = 0;
		while (i < size - 1)
		{
			if (arr [i] > arr [i + 1])
			{
				ft_sort (&arr [i], &arr [i + 1]);
				flag = 0;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
	int	arr [10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int	size = 10;
	int	i;

	ft_sort_int_tab (arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}	
	return (0);
}*/
