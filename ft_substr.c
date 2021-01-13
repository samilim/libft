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
	res = malloc(sizeof(char) * len - 1);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = str[start];
		i++;
		start++;
	}
	return (res);
}
