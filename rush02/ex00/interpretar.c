/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpretar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:31:44 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:24 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

char	*ft_strcat(char *dest, char *src);
int		ft_putstr2(char *str);

unsigned long int	check_digits(unsigned long int n)
{
	if (n == 0)
		return (0);
	if (n < 10)
		return (1);
	if (n < 100)
		return (2);
	if (n < 1000)
		return (3);
	if (n < 10000)
		return (4);
	if (n < 100000)
		return (5);
	if (n < 1000000)
		return (6);
	if (n < 10000000)
		return (7);
	if (n < 100000000)
		return (8);
	if (n < 1000000000)
		return (9);
	return (10);
}

char	**interpretar(unsigned long int nbr, char **strs)
{
	unsigned long int	place;
	unsigned long int	digit;

	digit = check_digits(nbr);
	place = 0;
	if (digit == 0)
	{
		strs[0] = "zero";
		strs[1] = "\0";
		return (strs);
	}
	while (place < digit)
	{
		if (digit - place > 2)
			strs[place++] = "UNIT POWER";
		else if (digit - place == 2)
			strs[place++] = "DIGITS";
		else if (digit - place == 1)
			strs[place++] = "UNITS";
	}	
	strs[place] = "\0";
	return (strs);
}

int	ft_putstr2(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
	{
		if (str[len] == '\0')
			return (1);
		write(1, &str[len], 1);
	}
	return (0);
}

void	print_result(char **strs, int input)
{
	int	count;
	int	digit;

	count = 0;
	digit = check_digits(input);
	while (strs[count])
	{
		ft_putstr2(strs[count]);
		if (count < digit - 1)
			write(1, &" ", 1);
		count++;
	}
}
