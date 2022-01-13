/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:45:23 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/14 17:58:34 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	r;
	int	len;

	len = -1;
	r = 1;
	while (str[++len])
	{
		if (str[len] < 32 || str[len] > 126)
			r = 0;
	}
	return (r);
}
