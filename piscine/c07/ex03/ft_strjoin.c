/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:22:36 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/07 16:22:37 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_length(int size, char **str, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(str[i]);
		i++;
	}
	l += ft_strlen(sep) * (size - 1);
	return (l);
}

char	*ft_strcat(char *dest, char	*src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size <= 0)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ft_length(size, strs, sep) + 1);
	if (!str)
		return (0);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char	*tab[3];
// 	tab[0]= "1";
// 	tab[1]= "2";
// 	tab[2]= "3";
//     printf("%s",ft_strjoin(3,tab," -*- "));
// }
