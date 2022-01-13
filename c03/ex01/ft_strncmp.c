/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:09:27 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 10:47:35 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (0);
	while (s1[len] == s2[len] && s1[len] && len < n - 1)
		len++;
	return (s1[len] - s2[len]);
}
