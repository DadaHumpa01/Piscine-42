/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:50:49 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/02 12:57:58 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		numero(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		minuscolo(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		maiuscolo(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		controlloparole(char c)
{
	if (numero(c))
		return (1);
	if (maiuscolo(c))
		return (1);
	if (minuscolo(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		controllo;

	i = 0;
	controllo = 1;
	while (str[i])
	{
		if (!controlloparole(str[i]))
			controllo = 1;
		else
		{
			if (controllo && minuscolo(str[i]))
				str[i] = str[i] - 32;
			else if (!controllo && maiuscolo(str[i]))
				str[i] = str[i] + 32;
			controllo = 0;
		}
		i++;
	}
	return (str);
}
