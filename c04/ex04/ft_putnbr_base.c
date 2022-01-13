/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:54:55 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/21 21:42:21 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(long int nb, char *base, int code)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= code)
		ft_putnbr2(nb / code, base, code);
	nb = nb % code;
	ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			l;
	int			c;
	long int	num;

	l = 0;
	num = nbr;
	if (num > 2147483647 || num < -2147483648)
		return ;
	while (base[l])
	{
		c = l + 1;
		while (base[c])
		{
			if (base[l] == '+' || base[l] == '-' || base[l] < 32
				|| base[l] > 126 || base[l] == base[c])
				return ;
			c++;
		}
		l++;
	}
	if (l <= 1)
		return ;
	ft_putnbr2(num, base, l);
}
