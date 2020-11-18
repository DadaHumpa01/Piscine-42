/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:20:28 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 16:33:01 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	char	*c;
	int		ritorno;

	c = str;
	ritorno = 1;
	while (*c != 0)
	{
		if (!(*c >= 32 && 127 >= *c))
		{
			ritorno = 0;
		}
		c++;
	}
	return (ritorno);
}
