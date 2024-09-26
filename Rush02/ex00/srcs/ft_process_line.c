/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:18:58 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 21:19:01 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_process_line(char ch, t_state *state, t_dict *dictionary)
{
	char	*s;

	s = ":\n";
	if (ch != s[state->p] && ((state->p == 0 && ch >= '0' && ch <= '9') \
		|| (state->p == 1 && (state->i > 0 || ch > ' '))))
	{
		state->line[state->i] = ch;
		state->i++;
	}
	else if (ch == s[state->p])
	{
		state->line[state->i] = 0;
		state->i = 0;
		if (state->p == 1)
		{
			state->p = 0;
			dictionary[state->size].word = ft_strdup(state->line);
			state->size++;
		}
		else
		{
			dictionary[state->size].number = ft_atoi(state->line);
			state->p = 1;
		}
	}
}
