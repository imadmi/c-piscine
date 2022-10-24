/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:50:31 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/11 17:48:15 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	j = min;
	if (max <= min)
		return (0);
	i = malloc(sizeof(*i) * (max - min));
	if (!(i))
		return (0);
	while (j < max)
	{
		i[j - min] = j;
		j++;
	}
	return (i);
}

// #include <stdio.h>
// int main (void)
// {
//     printf("%d",ft_range(-1,3)[0]);
//     printf("%d",ft_range(-1,3)[1]);
//     printf("%d",ft_range(-1,3)[2]);
//     printf("%d",ft_range(-1,3)[3]);
// }
