/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmompart <mmompart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:27:03 by mmompart          #+#    #+#             */
/*   Updated: 2021/12/12 23:07:58 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	input_arrays(char *s);

int	main(int argc, char *argv[])
{
	char	*s;

	if (argc != 2)
	{
		s = "ERROR";
		ft_putstr(s);
	}
	else
	{
		s = argv[1];
		input_arrays(s);
	}
}
