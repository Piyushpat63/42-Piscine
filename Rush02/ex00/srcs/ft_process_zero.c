/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:25:19 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 20:25:29 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_process_zero(t_dict *dictionary, int size, int *error)
{
	char	*word;
	int		len;

	word = ft_number_to_words(0, dictionary, size, error);
	if (*error)
		return ;
	len = ft_strlen(word);
	write(1, word, len);
	write(1, "\n", 1);
}
