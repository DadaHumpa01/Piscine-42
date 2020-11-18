/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:03:25 by dbrignon          #+#    #+#             */
/*   Updated: 2020/10/26 15:17:49 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int k;
	int temp;

	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		k = 0;
		while (k < size - 1 - i)
		{
			if (tab[k] > tab[k + 1])
			{
				temp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = temp;
			}
			k++;
		}
		i++;
	}
}
