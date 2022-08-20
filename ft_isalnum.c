/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnumb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:18:15 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/04 16:18:15 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnumb(int x)
{
	if (ft_isalpha(x) || ft_isdigit(x))
		return (1);
	return (0);
}