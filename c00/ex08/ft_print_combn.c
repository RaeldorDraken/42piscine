/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:44:46 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/10 12:24:47 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	longnbr2(int nb, int ex)
{
	if (nb >= ex)
	{
		nb = nb / ex;
	}
	return(nb);
}

void	longnbr3(int nb, int ex)
{
	int	length;
	int	*string;
	int tempex;

	tempex = 1;
	length = ex;
	string = &nb;
	while (--length > 0)
		tempex = tempex*10;
	while (length <= ex)
	{
		nb = nb / ex;
		string[length] = nb + 48; 
	}
	length = 0;
	while (string[ex])
	{
		ft_putchar(string[length]);
		length++;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int	num;
	int	ex;

	ex = 1;
	num = -1;
	while (--n >= 0)
		ex = ex*10;
	while (++num < ex)
	{
		longnbr3(num, ex);
	}

}
