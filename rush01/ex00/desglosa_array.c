/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   desglosa_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:15:34 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 20:43:54 by mmompart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	col_up(char *colupchar, int *colupint)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < 4)
	{
		colupint[i] = colupchar[len] - 48;
		i++;
		len++;
	}
}

void	col_down(char *colupchar, int *coldownint)
{
	int	i;
	int	len;

	i = 0;
	len = 4;
	while (i < 4)
	{
		coldownint[i] = colupchar[len] - 48;
		i++;
		len++;
	}
}

void	row_left(char *colupchar, int *rowleftint)
{
	int	i;
	int	len;

	i = 0;
	len = 8;
	while (i < 4)
	{
		rowleftint[i] = colupchar[len] - 48;
		i++;
		len++;
	}
}

void	row_right(char *colupchar, int *rowrightint)
{
	int	i;
	int	len;

	i = 0;
	len = 12;
	while (i < 4)
	{
		rowrightint[i] = colupchar[len] - 48;
		i++;
		len++;
	}
}
