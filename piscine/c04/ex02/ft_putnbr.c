/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:40:27 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/06 19:42:55 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
	else
	{
		i = i + '0';
		write(1, &i, 1);
	}
}
