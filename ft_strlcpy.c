/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:45:54 by salimon           #+#    #+#             */
/*   Updated: 2021/01/15 15:35:24 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	taille;

	i = 0;
	if (!dest || !src)
		return (0);
	d = ft_strlen(dest);
	taille = ft_strlen(src);
	if (!size)
		return (taille);
	while (src[i] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (taille);
}
