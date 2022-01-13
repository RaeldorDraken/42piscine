/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:45:23 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/14 17:16:57 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	r;
	int	len;

	len = -1;
	r = 1;
	while (str[++len])
	{
		if (str[len] < 65 || str[len] > 122)
			r = 0;
		else if (str[len] > 90 && str[len] < 97)
			r = 0;
	}
	return (r);
}
