/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:17:24 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 16:35:05 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	char	*c;
	int		ritorno;

	c = str;
	ritorno = 1;
	while (*c != 0)
	{
		if (!(*c >= 'A' && 'Z' >= *c))
		{
			ritorno = 0;
		}
		c++;
	}
	return (ritorno);
}
