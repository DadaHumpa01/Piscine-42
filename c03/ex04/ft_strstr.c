/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:43:20 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 19:45:23 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		b = 0;
		while (str[i + b] == to_find[b])
		{
			b++;
			if (to_find[b] == 0)
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
