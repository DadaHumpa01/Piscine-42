/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:18:57 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/06 11:22:20 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
