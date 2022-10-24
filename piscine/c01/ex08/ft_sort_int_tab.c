/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:18:55 by imimouni          #+#    #+#             */
/*   Updated: 2022/08/28 13:41:25 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	changement;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab [i + 1])
			{
				changement = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = changement;
			}
			i++;
		}
		size--;
	}
}
