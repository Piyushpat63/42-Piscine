/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_to_words.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:37:51 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 13:37:54 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_number_to_words(int num, t_dict *dict, int size, int *error)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i].number == num)
		{
			*error = 0;
			return (dict[i].word);
		}
		i++;
	}
	*error = 1;
	return ("");
}
