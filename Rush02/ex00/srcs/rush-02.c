/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:40:25 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 13:40:33 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	error;

	error = 1;
	if (argc == 2 || argc == 3)
	{
		if (argc == 3)
			error = ft_solve(argv[1], argv[2]);
		else
			error = ft_solve("numbers.dict", argv[1]);
	}
	if (error > 0)
		write(1, "Error\n", 6);
	else if (error < 0)
		write(1, "Dict Error\n", 11);
	return (error);
}
