/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 09:36:32 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/06 09:39:25 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (1 != power)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
