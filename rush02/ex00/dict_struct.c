/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jventura <jventura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:05:26 by jventura          #+#    #+#             */
/*   Updated: 2021/12/19 18:43:26 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //QUITAR
#include <fcntl.h>
#include <unistd.h>

unsigned long int	ft_atoi(char *str);
void				dict_param_to_struct(char *str, int size);

struct s_dict {
	unsigned int	key;
	char			*value;
	struct s_dict	*next;
};

struct s_dict	*g_first = NULL;

void	insert_dict(unsigned int key, char *value)
{
	struct s_dict	*new;

	new = (struct s_dict *)malloc(sizeof(struct s_dict));
	new->key = key;
	new->value = value;
	new->next = g_first;
	g_first = new;
}

struct s_dict	*find_dict(unsigned int key)
{
	struct s_dict	*current;

	current = g_first;
	if (g_first == NULL)
		return (NULL);
	while (current->key != key)
	{
		if (current->next == NULL)
			return (NULL);
		else
			current = current->next;
	}
	return (current);
}
