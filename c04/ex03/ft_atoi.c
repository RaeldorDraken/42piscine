/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:57:25 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/21 18:52:32 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	l;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	l = 0;
	while (str[l] == ' ' || str[l] == '\n' || str[l] == '\t'
		|| str[l] == '\v' || str[l] == '\r' || str[l] == '\f')
	{
		l++;
	}
	while (str[l] == '-' || str[l] == '+')
	{
		if (str[l] == '-')
			sign *= -1;
		l++;
	}
	while (str[l] > '/' && str[l] < ':')
	{
		res = (res * 10) + (str[l] - 48);
		l++;
	}
	return (res * sign);
}
