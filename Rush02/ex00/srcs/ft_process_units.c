/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_units.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:43:30 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 20:43:33 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_process_units(int *number, char *result, t_dict *dictionary, int size)
{
	char	*word;
	int		error;

	if (*number > 0)
	{
		word = ft_number_to_words(*number, dictionary, size, &error);
		if (error)
			return (error);
		ft_strcat(result, word);
	}
	return (0);
}
