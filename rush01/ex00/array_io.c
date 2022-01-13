/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_io.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:58:59 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 21:48:59 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	fil_col(int *colup, int *coldown, int *rowleft, int *rowright);
void	col_up(char *input, int *colupint);
void	col_down(char *input, int *coldownint);
void	row_left(char *input, int *rowleftint);
void	row_right(char *input, int *rowrightint);

void	output_arrays(char *input)
{
	int		colup[4];
	int		coldown[4];
	int		rowleft[4];
	int		rowright[4];

	col_up(input, colup);
	col_down(input, coldown);
	row_left(input, rowleft);
	row_right(input, rowright);
	fil_col(colup, coldown, rowleft, rowright);
}

void	input_arrays(char *s)
{
	char	input[16];
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < 16)
	{
		if (len % 2 == 0)
		{
			input[i] = s[len];
			i++;
		}
		len++;
	}
	output_arrays(input);
}
