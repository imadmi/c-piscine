/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:15:15 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/07 18:13:08 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		b *= nb;
		i++;
	}
	return (b);
}
