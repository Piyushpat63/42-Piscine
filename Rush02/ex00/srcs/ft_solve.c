/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:38:09 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 14:48:04 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_solve(char *dict_name, char *num)
{
	int		number;
	int		size;
	int		error;
	t_dict	dictionary[DICT_SIZE];

	size = ft_load_dictionary(dict_name, dictionary);
	if (size == -1)
		return (size);
	number = ft_atoi(num);
	if ((number == 0 && ft_strcmp(num, "0") != 0) || number < 0)
		return (1);
	error = ft_convert_number_to_words(number, dictionary, size);
	return (error);
}
