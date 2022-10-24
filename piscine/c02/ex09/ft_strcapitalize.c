/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:53:27 by imimouni          #+#    #+#             */
/*   Updated: 2022/09/01 10:11:01 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		if_its_cap_or_not;

	i = 0;
	if_its_cap_or_not = 1;
	lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (if_its_cap_or_not == 1)
				str[i] -= 32;
			if_its_cap_or_not = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			if_its_cap_or_not = 0;
		else
			if_its_cap_or_not = 1;
		i++;
	}
	return (str);
}
// int main() 
// {
//     char str[]="imod sAmaad+mo 89bb";
//     ft_strcapitalize(str);
//     printf("%s",str);

//     return 0;
// }
