/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:26:11 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/14 11:39:34 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	len;
	int	i;

	len = 0;
	i = size -1;
	while (len < i)
	{
		if (tab[len] > tab[len + 1])
		{
			temp = tab[len];
			tab[len] = tab[len + 1];
			tab[len + 1] = temp;
			len = 0;
		}
		else
			len++;
	}
}
