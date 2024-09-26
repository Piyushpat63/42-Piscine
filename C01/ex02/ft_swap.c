/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:56:41 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 14:42:47 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	 main(void)
{
	int a, b;

	a = 12;
	b = 21;
	
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("After swap\n");
	printf("%d\n",a);
	printf("%d\n",b);
	return (0);
}*/
