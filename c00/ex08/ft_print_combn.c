/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:30:05 by dbrignon          #+#    #+#             */
/*   Updated: 2020/10/26 17:52:58 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inc(char *buf, int i, int n)
{
	if (buf[i] == '9')
	{
		return (inc(buf, i - 1, n));
	}
	buf[i++]++;
	while (i < n)
	{
		if (buf[i - 1] == '9')
		{
			inc(buf, i - 1, n);
		}
		else
		{
			buf[i] = buf[i - 1] + 1;
		}
		i++;
	}
	return ;
}

int		max(char *buf, int n)
{
	int max;
	int i;

	max = 0;
	i = 0;
	while (i < n - 1)
	{
		if (buf[i] + 1 == buf[i + 1])
		{
			max++;
		}
		i++;
	}
	return (buf[n - 1] == '9' && max == n - 1);
}

void	int_to_char(char *buf, int i, int n)
{
	while (i < n)
	{
		buf[i] = i + '0';
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	buf[n];

	i = 0;
	if (n < 0 || n > 9)
	{
		return ;
	}
	int_to_char(buf, i, n);
	while (1)
	{
		write(1, buf, n);
		if (!max(buf, n))
		{
			write(1, buf, 2);
		}
		else
		{
			break ;
		}
		inc(buf, n - 1, n);
	}
}
