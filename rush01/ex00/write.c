/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:04:55 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 23:07:56 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
}

void	ft_puttable(int tab[4][4])
{
	int	fil;
	int	col;
	int	booleano;

	booleano = 0;
	fil = -1;
	while (booleano == 0)
	{
		booleano = 1;
		while (++fil < 4)
		{
			col = -1;
			while (++col < 4)
			{
				if (tab[fil][col] == 0)
				{
					booleano = 0;
				}
				ft_putchar(tab[fil][col] + 48);
				ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
