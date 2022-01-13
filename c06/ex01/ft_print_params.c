/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:35:11 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/22 15:40:48 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, &"\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
