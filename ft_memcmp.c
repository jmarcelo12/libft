/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:55:50 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/05 14:55:50 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t index;
	int	x;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
		{
			x = (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
			return (x);
		}
		index++;
	}
	return (0);
}