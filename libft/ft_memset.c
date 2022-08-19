/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:41:07 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/04 16:41:07 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void* s, int c, size_t i)
{
	unsigned char *str; 
	size_t	x;

	x = 0;
	s = str;
	while (x < i)
	{
		str[x] = c;
		i++;
	}
	return (str);
}