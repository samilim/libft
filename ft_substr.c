/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:48:12 by salimon           #+#    #+#             */
/*   Updated: 2021/01/12 18:54:19 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!str)
		return (NULL);
	if(!(res = malloc(sizeof(char) * (len + 1))))
	    return (NULL);
	if (start > ft_strlen(str))
	    return (NULL);
	while (str[start] && i < len)
	{
		res[i] = str[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
