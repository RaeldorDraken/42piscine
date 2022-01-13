/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:11:47 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/14 11:00:26 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	cen;
	int	dec;
	int	uni;

	cen = 47;
	while (++cen < 56)
	{
		dec = cen;
		while (++dec < 57)
		{
			uni = dec;
			while (++uni < 58)
			{
				ft_putchar(cen);
				ft_putchar(dec);
				ft_putchar(uni);
				if (cen < 55 || dec < 56 || uni < 57)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
