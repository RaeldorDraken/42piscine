/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   principal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:04:44 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 23:07:37 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_puttable(int tab[4][4]);
void	valor_colup(int tab[4][4], int *colup, int *coldown);
void	valor_coldown(int tab[4][4], int *colup, int *coldown);
void	valor_rowleft(int tab[4][4], int *rowleft, int *rowright);
void	valor_rowright(int tab[4][4], int *rowleft, int *rowright);

void	tab_init(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			tab[i][j] = 0;
		}
	}
}

int	val_final(int tab[4][4], int fil, int col)
{
	int	loop;

	loop = 0;
	if (col == 0)
	{
		while (loop < 3)
		{
			tab[fil][col]++;
			if (tab[fil][1] != 0 && tab[fil][2] != 0 && tab[fil][3] != 0)
			{
				if (tab[fil][col] != tab[fil][1])
					return (tab[fil][col]);
			}
			else
				return (0);
		}
	}
	return (0);
}

void	resto_tabla(int tab[4][4])
{
	int	loop;
	int	fil;
	int	col;

	loop = 5;
	while (--loop > 0)
	{
		fil = -1;
		while (++fil < 4)
		{
			col = -1;
			while (++col < 4)
			{
				if (tab[fil][col] == 0)
					tab[fil][col] = val_final(tab, fil, col);
			}
		}
	}
}

void	fil_col(int *colup, int *coldown, int *rowleft, int *rowright)
{
	int	tab[4][4];

	tab_init(tab);
	valor_colup(tab, colup, coldown);
	valor_coldown(tab, colup, coldown);
	valor_rowleft(tab, rowleft, rowright);
	valor_rowright(tab, rowleft, rowright);
	resto_tabla(tab);
	ft_puttable(tab);
}
