/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_thousands.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:30:51 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 20:31:18 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_process_thousands(int *num, char *result, t_dict *dic, int size)
{
	char	*word;
	int		n;
	int		error;

	if (*num >= 1000)
	{
		n = *num / 1000;
		word = ft_number_to_words(n, dic, size, &error);
		if (error)
			return (-1);
		ft_strcat(result, word);
		ft_strcat(result, " ");
		word = ft_number_to_words(1000, dic, size, &error);
		if (error)
			return (-1);
		ft_strcat(result, word);
		ft_strcat(result, " ");
		*num %= 1000;
	}
	return (0);
}
