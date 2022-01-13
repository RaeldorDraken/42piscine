/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:54:23 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/09 13:22:39 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (nb > 2147483647 || nb < -2147483648)
		write(1, "E", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	num = num % 10 + 48;
	write(1, &num, 1);
}
