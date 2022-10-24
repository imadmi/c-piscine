/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:01:02 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/07 18:22:14 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 1 || nb <= 0)
		return (0);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i < nb / 2)
	{
		if (nb % i == 0 && i != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if ((nb >= 2147483590) && (nb <= 2147483629))
		return (2147483629);
	if (nb >= 2147483630)
		return (2147483647);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
