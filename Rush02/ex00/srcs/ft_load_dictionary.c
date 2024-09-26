/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_dictionary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorp <jcorp@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:49:32 by jcorp             #+#    #+#             */
/*   Updated: 2024/09/22 21:10:25 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_load_dictionary(const char *filename, t_dict *dictionary)
{
	char	ch;
	t_state	state;
	int		fd;

	state.size = 0;
	state.p = 0;
	state.i = 0;
	state.line = malloc(BUF_SIZE * sizeof(char));
	if (!state.line)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(state.line);
		return (-1);
	}
	while (read(fd, &ch, 1) > 0)
		ft_process_line(ch, &state, dictionary);
	close(fd);
	free(state.line);
	return (state.size);
}
