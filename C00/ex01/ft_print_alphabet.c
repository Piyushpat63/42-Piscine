/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipatel <pipatel@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:48:09 by pipatel           #+#    #+#             */
/*   Updated: 2024/09/07 16:38:40 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	charactor;

	charactor = 'a';
	while (charactor <= 'z')
	{
		write (1, &charactor, 1);
		charactor++;
	}
}	
//int main(void)
//	{
//	ft_print_alphabet();
//}
