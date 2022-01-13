/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jventura <jventura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:37:13 by jventura          #+#    #+#             */
/*   Updated: 2021/12/19 20:57:27 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned long int	ft_atoi(char *str);
void				insert_dict(unsigned int key, char *value);

void	ft_strcp(char *str, char *value, int i)
{
	int	j;

	j = 0;
	i--;
	while (str[i] != '\n')
	{
		value[j] = str[i];
		i++;
		j++;
	}
}

int	check_char(char *str, char *value, int count, int i)
{
	int		is_key;
	char	key[11];

	is_key = 0;
	if (str[i] == ':' && is_key == 0)
		is_key = 1;
	else if (str[i] > 47 && str[i] < 58 && is_key == 0)
	{
		if (i > 11)
		{
			return (0);
		}
		key[i] = str[i];
	}
	else if (is_key == 1 && str[i] > 32 && str[i] < 127)
	{
		value = (char *)malloc(sizeof(char) * (count - i));
		is_key = 2;
	}
	else if (is_key == 2)
		return (0);
	return (0);
}

int	dict_param_to_struct(char *str, int count)
{
	int		i;
	int		is_key;
	char	key[11];
	char	*value;

	i = 0;
	is_key = 0;
	value = "\0";
	while (i < count)
	{
		check_char(str, value, count, i);
		i++;
	}
	ft_strcp(str, value, i);
	insert_dict(ft_atoi(key), value);
	return (0);
}
