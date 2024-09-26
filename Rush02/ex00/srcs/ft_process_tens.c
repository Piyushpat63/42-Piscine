/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_tens.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:42:44 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 20:42:48 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_process_tens(int *number, char *result, t_dict *dictionary, int size)
{
	char	*word;
	int		n;
	int		error;

	if (*number >= 20)
	{
		n = (*number / 10) * 10;
		word = ft_number_to_words(n, dictionary, size, &error);
		if (error)
			return (-1);
		ft_strcat(result, word);
		*number %= 10;
		if (*number > 0)
			ft_strcat(result, "-");
		else
			ft_strcat(result, " ");
	}
	return (0);
}
