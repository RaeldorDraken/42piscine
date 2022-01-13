/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:39:55 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/18 19:17:09 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
	{
		if (str[len] > 64 && str[len] < 91)
			str[len] = str[len] + 32;
		if (str[len] > 96 && str[len] < 123)
		{
			if (len == 0)
				str[len] = str[len] - 32;
			else if (!(((str[len - 1] > 96) && (str[len - 1] < 123))
					|| (str[len - 1] > 64 && str[len - 1] < 91)
					|| (str[len - 1] > 47 && str[len - 1] < 58)))
			{
				str[len] = str[len] - 32;
			}
		}
	}
	return (str);
}
