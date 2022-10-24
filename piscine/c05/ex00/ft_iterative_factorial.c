/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:42:14 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/07 18:07:53 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
