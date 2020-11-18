/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:24:17 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 16:40:24 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int		risultato;
	char	*c;

	c = str;
	risultato = 1;
	while (*c != 0)
	{
		if (!(*c >= '0' && '9' >= *c))
		{
			risultato = 0;
		}
		c++;
	}
	return (risultato);
}
