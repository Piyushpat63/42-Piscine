/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:19:39 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/07 16:41:35 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		write (1, &rev, 1);
		rev--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
