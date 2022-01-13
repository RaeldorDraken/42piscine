/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:57:50 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 11:48:04 by eros-gir         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	len;

	len = 0;
	destlen = ft_strlen(dest);
	while (src[len] && len < nb)
	{
		dest[destlen] = src[len];
		destlen++;
		len++;
	}
	dest[destlen] = '\0';
	return (dest);
}
