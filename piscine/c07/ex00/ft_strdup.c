/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:32:56 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/11 17:38:36 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*tab;

	tab = malloc(sizeof(*tab) * (ft_strlen(src) + 1));
	if (!(tab))
		return (0);
	ft_strcpy(tab, src);
	return (tab);
}

// #include <stdio.h>
// int main (void)
// {
//     printf("%s",ft_strdup("imad"));
//     return 0;
// }
