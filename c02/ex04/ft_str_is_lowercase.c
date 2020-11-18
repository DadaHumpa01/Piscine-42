/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:14:11 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 16:37:11 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	char	*c;
	int		risultato;

	c = str;
	risultato = 1;
	while (*c != 0)
	{
		if (!(*c >= 'a' && 'z' >= *c))
		{
			risultato = 0;
		}
		c++;
	}
	return (risultato);
}
