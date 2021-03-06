/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:57:59 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/14 10:30:49 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	j;
	int	i;

	j = 0;
	i = size - 1;
	while (j < i)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i--;
		j++;
	}
}
