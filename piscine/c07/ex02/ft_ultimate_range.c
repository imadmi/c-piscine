/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:15:13 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/11 17:52:27 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i;
	int	j;

	j = min;
	if (min >= max)
	{
		i = NULL;
		return (0);
	}
	i = malloc(sizeof(int) * (max - min));
	if (!(i))
		return (-1);
	while (j < max)
	{
		i[j - min] = j;
		j++;
	}
	*range = i;
	return (j - min);
}

// #include <stdio.h>
// int main(void)
// {
// 	int		*range;
// 	int		i;

// 	i = 0;
// 	printf("the return value : %d \n", ft_ultimate_range(&range, -5, 7));
// 	while (i < 12)
// 	{
//     printf(" %d ", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
