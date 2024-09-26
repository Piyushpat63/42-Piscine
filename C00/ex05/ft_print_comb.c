/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:23:32 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/09 17:27:28 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '6')
	{
		b = a + 1;
		while (b <= '8')
		{	
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
	write (1, "789", 3);
}
/*
int	main(void)
{
	ft_print_comb ();
	return 0;
}*/
