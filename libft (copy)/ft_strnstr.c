/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:16:42 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/05 15:16:42 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	if (needle[index] == '\0')
		return ((char *)haystack);
	while (index < len && haystack[index] != '\0')
	{
		count = 0;
		while (haystack[index + count] == needle[count]
			&& (index + count) < len)
		{
			if (needle[count + 1] == '\0')
				return ((char *)(haystack + index));
			count++;
		}
		index++;
	}
	return (NULL);
}