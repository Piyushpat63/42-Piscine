/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorp <jcorp@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:49:32 by jcorp             #+#    #+#             */
/*   Updated: 2024/09/22 16:16:39 by pipatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	int		dict;
	char	ch;
	char	*numbers = "numbers.dict";
	char	buffer[1024];
	int		i;
	int		j;
	int		k;
	char	dic[100][2][100];
	int		p = 0;
	char	s[2] = ":\n";

	i = 0;
	j = 0;
	k = 0;
	p = 0;
	dict = open("numbers.dict", O_RDONLY);
	while (read (dict, &ch, 1) > 0)
	{
		if (ch != s[p])
		{
			dic[k][p][i] = ch;
			i++;
		}
		else if (ch == s[p])
		{
			dic[k][p][++i] = 0;
			i = 0;
			if (p == 1)
			{
				p = 0;
				k++;
			}
			else
				p = 1;
		}
		write(1, &ch, 1);
	}
	close(dict);
	i = 0;
	ft_putchar('\n');
	while (i < k)
	{
		p = 0;
		while (p < 2)
		{
			ft_putstr(dic[i][p]);
			ft_putchar(s[p]);
			p++;
		}
		i++;
	}
}
