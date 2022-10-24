/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:07:31 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/05 09:29:05 by imimouni         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;
	int	d;

	i = 0;
	c = ft_strlen(dest);
	d = ft_strlen(src);
	while (src[i] != '\0' && i < d)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

// int main() 
// {
//     // int n=3;
//     char dest[]="imad";
//     char src[]="oussama";
//     printf("%s",ft_strcat(dest,src));
// }
