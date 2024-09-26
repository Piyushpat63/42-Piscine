/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_number_to_words.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:27:55 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 14:46:51 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_convert_number_to_words(int number, t_dict *dictionary, int size)
{
	char	result[4096];
	int		error;

	if (number == 0)
	{
		ft_process_zero(dictionary, size, &error);
		return (error);
	}
	error = ft_process_thousands(&number, result, dictionary, size);
	if (error)
		return (error);
	error = ft_process_hundreds(&number, result, dictionary, size);
	if (error)
		return (error);
	error = ft_process_tens(&number, result, dictionary, size);
	if (error)
		return (error);
	error = ft_process_units(&number, result, dictionary, size);
	if (error)
		return (error);
	write(1, result, ft_strlen(result));
	write(1, "\n", 1);
	return (0);
}
