/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:01:11 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 10:46:39 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	len;

	len = 0;
	while (s1[len] == s2[len] && s1[len])
		len++;
	return (s1[len] - s2[len]);
}