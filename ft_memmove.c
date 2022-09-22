/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:09:57 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/04 18:09:57 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	index;

	if (dst == 0)
		return (NULL);
	if (dst > src)
	{
		index = (int) len;
		while (index > 0)
		{
			index--;
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		}
	}
	else
	{
		index = 0;
		while (index < (int)len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
		}	
	}	
	return (dst);
}
