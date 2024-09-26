/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:03:51 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 14:45:24 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

void	ft_rev_int_tab(int *arr, int size)
{
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		ft_swap (&arr [i], &arr[size - 1]);
		size--;
		i++;
	}
}
/*int	main(void)
{
	int	arr [] = {1, 2, 3, 5, 6, 7, 8};
	int	size = 7;
	int	i;

	ft_rev_int_tab (arr, size);
	i = 0;
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
}*/
