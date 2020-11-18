/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:23:44 by dbrignon          #+#    #+#             */
/*   Updated: 2020/10/24 17:08:39 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	riga_iniziale(int x, char a, char b, char c)
{
	char	e;
	int		xc;

	e = '\n';
	xc = 0;
	while (xc <= x)
	{
		xc++;
		if (xc == 1)
		{
			ft_putchar(a);
		}
		if (xc > 1 && xc < x)
		{
			ft_putchar(c);
		}
		if (xc == x && xc != 1)
		{
			ft_putchar(b);
		}
	}
	ft_putchar(e);
}

void	riga_centrale(int x, char c)
{
	char	d;
	char	e;
	int		xc;

	d = ' ';
	e = '\n';
	xc = 0;
	while (xc <= x)
	{
		xc++;
		if (xc == 1)
		{
			ft_putchar(c);
		}
		if (xc > 1 && xc < x)
		{
			ft_putchar(d);
		}
		if (xc == x && xc != 1)
		{
			ft_putchar(c);
		}
	}
	ft_putchar(e);
}

void	riga_finale(int x, char a, char b, char c)
{
	char	e;
	int		xc;

	e = '\n';
	xc = 0;
	while (xc <= x)
	{
		xc++;
		if (xc == 1)
		{
			ft_putchar(b);
		}
		if (xc > 1 && xc < x)
		{
			ft_putchar(c);
		}
		if (xc == x && xc != 1)
		{
			ft_putchar(a);
		}
	}
	ft_putchar(e);
}

void	rush(int x, int y)
{
	int		yc;

	yc = 0;
	while (yc <= y)
	{
		yc++;
		if (yc == 1)
		{
			riga_iniziale(x, 'o', 'o', '-');
		}
		if (yc > 1 && yc < y)
		{
			riga_centrale(x, '|');
		}
		if (yc == y && yc != 1)
		{
			riga_finale(x, 'o', 'o', '-');
		}
	}
}
