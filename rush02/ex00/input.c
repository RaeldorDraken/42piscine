/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-bord <ade-bord@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:10:03 by ade-bord          #+#    #+#             */
/*   Updated: 2021/12/19 22:09:21 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned long int	ft_atoi(char *str)
{
	int					i;
	unsigned long int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	lend;
	int	lens;

	lens = 0;
	lend = 0;
	while (dest[lend] != '\0')
		lend++;
	dest[lend] = '\0';
	while (src[lens] != '\0')
	{
		dest[lend + lens] = src[lens];
		lens++;
	}
	dest[lend + lens] = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	len;

	len = 0;
	while (s1[len] == s2[len] && s1[len])
		len++;
	return (s1[len] - s2[len]);
}

int	check_error(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else if (argc == 2)
		str = argv[1];
	else
		str = argv[2];
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}
