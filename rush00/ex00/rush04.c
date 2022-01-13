/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:22:51 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/04 14:07:13 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	//Declarar variables temporales para el while loop
	int j = x;
	int i = y;

	//while loop de i determina la fila que se escibe
	while (i > 0)
	{
		//while loop de j determina en que caracter estamos escribiendo
		while (j > 0)
		{
			if (i == y)
			{
				ft_putchar('o');
			}
			else if (i <= 1)
			{
				ft_putchar('o');
			}
			else
			{
				if (j == x)
				{
					ft_putchar('o');
				}
				else if (j <= 1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			j--;
		}
		ft_putchar('\n');
		i--;
		j = x;;
		
	}
}
