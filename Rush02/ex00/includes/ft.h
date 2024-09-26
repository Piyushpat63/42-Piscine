/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilotsk <ybilotsk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:27:49 by ybilotsk          #+#    #+#             */
/*   Updated: 2024/09/22 13:35:17 by ybilotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# define DICT_SIZE 100
# define BUF_SIZE 256

typedef struct s_dict
{
	int		number;
	char	*word;
}	t_dict;

typedef struct s_state
{
	char	*line;
	int		size;
	int		p;
	int		i;
}	t_state;

char	*ft_strdup(char *s1);
char	*ft_strcat(char *dest, char *src);
char	*ft_number_to_words(int n, t_dict *d, int s, int *e);
int		ft_strlen(char *str);
int		ft_isspace(char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_load_dictionary(const char *filename, t_dict *dict);
int		ft_convert_number_to_words(int n, t_dict *d, int s);
int		ft_solve(char *dict_name, char *num);
int		ft_atoi(char *str);
void	ft_process_zero(t_dict *dictionary, int size, int *error);
int		ft_process_thousands(int *n, char *r, t_dict *d, int size);
int		ft_process_hundreds(int *n, char *r, t_dict *d, int s);
int		ft_process_tens(int *n, char *r, t_dict *d, int s);
int		ft_process_units(int *n, char *r, t_dict *d, int s);
void	ft_process_line(char ch, t_state *state, t_dict *dictionary);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
#endif
