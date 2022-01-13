/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:25:42 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/22 15:34:29 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
}
