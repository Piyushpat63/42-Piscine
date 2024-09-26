/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_hundreds.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:31:44 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 20:31:47 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_process_hundreds(int *number, char *result, t_dict *dictionary, int size)
{
	char	*word;
	int		n;
	int		error;

	if (*number >= 100)
	{
		n = *number / 100;
		word = ft_number_to_words(n, dictionary, size, &error);
		if (error)
			return (-1);
		ft_strcat(result, word);
		ft_strcat(result, " ");
		word = ft_number_to_words(100, dictionary, size, &error);
		if (error)
			return (-1);
		ft_strcat(result, word);
		*number %= 100;
		if (*number > 0)
			ft_strcat(result, " and ");
		else
			ft_strcat(result, " ");
	}
	return (0);
}
