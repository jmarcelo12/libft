/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.com    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:32:34 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/05 16:32:34 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	index_2;
	char	*s;

	index = 0;
	index_2 = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (s == 0)
		return (NULL);
	while (s1[index] != '\0')
	{
		s[index] = s1[index];
		index++;
	}
	while (s2[index_2] != '\0')
	{
		s[index] = s2[index_2];
		index++;
		index_2++;
	}
	s[index] = '\0';
	return (s);
}
