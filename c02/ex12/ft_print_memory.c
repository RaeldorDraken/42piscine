/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:23:06 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/16 13:36:04 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		len;
	char	*code;

	len = -1;
	while (str[++len])
	{
		if (str[len] > 31 && str[len] < 127)
			write(1, &str[len], 1);
		else
			write(1, &".", 1);
	}
}

char	get_hex(char n)
{
	if (n >= 0 && < 10)
		return ('0' + n);
	else
		return ('a' + n - 10);
}

void	print_adress(void *addr)
{
	int				len;
	unsigned int	*ptr;

	ptr = addr;
	len = -1;
	write(1, &"0", 1);
	write(1, &"x", 1);
	while (ptr[++len])
		write(1, ptr[len], 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	len;

	len = 0;
	if (size > 0)
		ft_putstr_non_printable(addr);
	return (*addr);
}
