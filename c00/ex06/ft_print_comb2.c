/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:44:46 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/09 12:13:26 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	longnbr(int n)
{
	int	dec;
	int	uni;

	uni = n % 10 + 48;
	dec = n / 10 + 48;
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = -1;
	while (++num1 < 99)
	{
		num2 = num1;
		while (++num2 < 100)
		{
			longnbr(num1);
			write(1, " ", 1);
			longnbr(num2);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
	}
}
