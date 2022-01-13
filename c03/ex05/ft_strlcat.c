/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:16:30 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/17 13:25:48 by eros-gir         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	lens;
	unsigned int	lenf;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	lens = 0;
	lenf = destlen;
	if (size == 0)
		return (srclen + size);
	while (src[lens] && destlen < size - 1)
	{
		dest[lenf] = src[lens];
		lenf++;
		lens++;
	}
	dest[lenf] = '\0';
	if (size < destlen)
		return (srclen + size);
	else
		return (destlen + srclen);
}
