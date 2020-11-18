/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:09:45 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/08 12:15:41 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int aux;

	aux = argc - 1;
	while (1 <= aux)
	{
		if (aux < 1)
		{
			break ;
		}
		putstr(argv[aux]);
		putstr("\n");
		aux--;
	}
}
