/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:49:24 by imimouni          #+#    #+#             */
/*   Updated: 2022/08/26 23:49:27 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			afficher(a / 10 + '0');
			afficher(a % 10 + '0');
			afficher(' ');
			afficher(b / 10 + '0');
			afficher(b % 10 + '0');
			if (a != 98)
			{
				afficher(',');
				afficher(' ');
			}
		}
	}
}
