/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jventura <jventura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:33:49 by jventura          #+#    #+#             */
/*   Updated: 2021/12/19 18:38:10 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	dict_param_to_struct(char *str, int count);

int	size_of_line(int file, int read_chars)
{
	char	*str_char;
	char	c;
	int		count;

	count = 0;
	str_char = (char *)malloc(sizeof(char) * read_chars);
	read(file, &str_char, read_chars);
	c = '\0';
	while (c != '\n')
	{
		read(file, &c, 1);
		count++;
	}
	close(file);
	return (count);
}

void	read_line(char *path)
{
	char	*firstline;
	int		i;
	int		count;
	int		file;

	i = 0;
	count = 0;
	file = open(path, O_RDONLY);
	count = size_of_line(file, count);
	firstline = (char *)malloc(sizeof(char) * count);
	while (i < count)
	{
		read(file, &firstline[i], 1);
		i++;
	}
	firstline[i] = '\0';
	dict_param_to_struct(firstline, count);
	free(firstline);
	close(file);
}
