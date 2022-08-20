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

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t x;
	size_t y;

	y = 0;
	while (src[y] != '\0')
		y++;
	x = 0;
	while (x < (n - 1) && src[x] != '\0')
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	dst[x] = '\0';
	return (y);
}