/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:19:54 by dbrignon          #+#    #+#             */
/*   Updated: 2020/10/26 15:20:18 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		aux[i] = tab[i];
		i++;
	}
	i = i - 1;
	while (j < size)
	{
		tab[j] = aux[i];
		i--;
		j++;
	}
}
