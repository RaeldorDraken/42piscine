/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:06:52 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 11:30:38 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				len;
	char			*code;
	unsigned char	temp;

	len = -1;
	code = "0123456789abcdef";
	while (str[++len])
	{
		temp = str[len];
		if (str[len] > 31 && str[len] < 127)
			ft_putchar(str[len]);
		else
		{
			ft_putchar('\\');
			ft_putchar(code[temp / 16]);
			ft_putchar(code[temp % 16]);
		}
	}
}
