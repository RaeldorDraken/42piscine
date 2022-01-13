/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:48:13 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/18 19:56:16 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (nb > 2147483647 || nb < -2147483648)
		write(1, "Error\n", 6);
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
