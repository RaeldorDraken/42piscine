/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:48:29 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 12:15:35 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	lens;
	int	lenf;

	lens = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++lens])
	{
		lenf = -1;
		while (str[lens + ++lenf] && str[lens + lenf] == to_find[lenf])
		{
			if (to_find[lenf + 1] == '\0')
				return (&str[lens]);
		}
	}
	return (0);
}
