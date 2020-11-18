/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:07:37 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 16:59:14 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	char	*c;
	int		i;
	int		risultato;

	c = str;
	i = 0;
	risultato = 1;
	while (*c != 0)
	{
		if (!((*c >= 'a' && 'z' >= *c) || (*c >= 'A' && 'Z' >= *c)))
		{
			risultato = 0;
		}
		c++;
	}
	return (risultato);
}
