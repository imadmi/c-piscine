/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:33:56 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/05 09:49:47 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				c;
	int				d;

	i = 0;
	c = ft_strlen(dest);
	d = ft_strlen(src);
	while (src[i] != '\0' && i < nb)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

// int main() 
// {
//     int nb=3;
//     char dest[]="imad ";
//     char src[]="oussama";

//     printf("%s",ft_strncat(dest,src,nb));
// }
