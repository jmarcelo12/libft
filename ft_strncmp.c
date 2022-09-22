/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:42:23 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/05 14:42:23 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		rst;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
		{
			rst = ((unsigned char *)s1)[index] - ((unsigned char *)s2)[index];
			return (rst);
		}
		index++;
	}
	return (0);
}
