/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:07:30 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/04 19:07:30 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
	size_t x;
	size_t y;

	y = 0;
	x = 0;
	while (dst[y] != '\0')
		y++;
	if (y >= n)
	{
		while (src[x] != '\0')
			x++;
		return (n + x);
	}
	while (y < (n - 1) && src[x] != '\0')
	{
		dst[y] = src[x];
		x++;
		y++;
	}
	dst[x] = '\0';
	while (src[x++] != '\0')
		y++;
	return (y);
}