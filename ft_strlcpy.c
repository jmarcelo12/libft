/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:41:29 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/04 18:41:29 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	index2;

	index = 0;
	while (src[index] != '\0')
		index++;
	if (size > 0)
	{
		index2 = 0;
		while (index2 < (size - 1) && src[index2] != '\0')
		{
			dst[index2] = src[index2];
			index2++;
		}
		dst[index2] = '\0';
	}
	return (index);
}