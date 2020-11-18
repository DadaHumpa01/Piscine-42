/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:00:53 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/03 19:09:08 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int ritorno;

	ritorno = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			ritorno = s1[i] - s2[i];
			break ;
		}
		else
			ritorno = 0;
		i++;
	}
	return (ritorno);
}
