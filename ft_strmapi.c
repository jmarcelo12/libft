/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcelo  <jmarcelo@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:31:41 by jmarcelo          #+#    #+#             */
/*   Updated: 2022/07/24 15:31:41 by jmarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}