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

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t x;

	if (dst == 0)
		return (NULL);
	if (dst > src)
	{
		x = n;
		while (x <= 0)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x--;
		}
	}
	else
	{
		x = 0;
		while (x < n)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dst);
}