/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:50:25 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 10:55:39 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	len;

	len = -1;
	destlen = ft_strlen(dest);
	while (src[++len])
	{
		dest[destlen] = src[len];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
