/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:34:42 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/05 16:39:50 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	ritorno;
	int				j;
	int				i;

	ritorno = 0;
	i = 0;
	j = 0;
	while (*s1 != '\0' && (*s1 == *s2))
	{
		if (s1[i] != s2[i])
		{
			ritorno = s1 - s2;
			break ;
		}
		else
			ritorno = 0;
		s1++;
		s2++;
	}
	return (ritorno = s1[i] - s2[i]);
}
