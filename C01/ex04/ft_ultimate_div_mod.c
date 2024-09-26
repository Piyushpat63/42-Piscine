/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:39:06 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/15 14:43:48 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}	
/*
int	main(void)
{
	int	a, b;

	a = 15;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf(" The divisioon is = %d\n", a);
	printf("The reminder is = %d", b);
	return (0);
}*/
