/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valores_seguros.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:04:44 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 22:11:05 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	valor_colup(int tab[4][4], int *colup, int *coldown)
{
	int	len;

	len = -1;
	while (++len < 4)
	{
		if (colup[len] == 4)
		{
			tab[0][len] = 1;
			tab[1][len] = 2;
			tab[2][len] = 3;
			tab[3][len] = 4;
		}
		else if (colup[len] == 1)
			tab[0][len] = 4;
		else if (colup[len] == 3)
		{
			if (coldown[len] == 1)
				tab[1][len] = 3;
			else if (coldown[len] == 2)
				tab[2][len] = 4;
			else
				return ;
		}
	}
}

void	valor_coldown(int tab[4][4], int *colup, int *coldown)
{
	int	len;

	len = -1;
	while (++len < 4)
	{
		if (coldown[len] == 4)
		{
			tab[3][len] = 1;
			tab[2][len] = 2;
			tab[1][len] = 3;
			tab[0][len] = 4;
		}
		else if (coldown[len] == 1)
			tab[3][len] = 4;
		else if (colup[len] == 3)
		{
			if (colup[len] == 1)
				tab[2][len] = 3;
			else if (colup[len] == 2)
				tab[1][len] = 4;
			else
				return ;
		}
	}
}

void	valor_rowleft(int tab[4][4], int *rowleft, int *rowright)
{
	int	len;

	len = -1;
	while (++len < 4)
	{
		if (rowleft[len] == 4)
		{
			tab[len][0] = 1;
			tab[len][1] = 2;
			tab[len][2] = 3;
			tab[len][3] = 4;
		}
		else if (rowleft[len] == 1)
			tab[len][0] = 4;
		else if (rowleft[len] == 3)
		{
			if (rowright[len] == 1)
				tab[len][1] = 3;
			else if (rowright[len] == 2)
				tab[len][2] = 4;
			else
				return ;
		}
	}
}

void	valor_rowright(int tab[4][4], int *rowleft, int *rowright)
{
	int	len;

	len = -1;
	while (++len < 4)
	{
		if (rowright[len] == 4)
		{
			tab[len][3] = 1;
			tab[len][2] = 2;
			tab[len][1] = 3;
			tab[len][0] = 4;
		}
		else if (rowright[len] == 1)
			tab[len][3] = 4;
		else if (rowright[len] == 3)
		{
			if (rowleft[len] == 1)
				tab[len][2] = 3;
			else if (rowleft[len] == 2)
				tab[len][1] = 4;
			else
				return ;
		}
	}
}
