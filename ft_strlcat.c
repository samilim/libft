/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:46:08 by salimon           #+#    #+#             */
/*   Updated: 2021/01/15 15:19:40 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t d;
	size_t taille;

	i = 0;
	d = 0;
	taille = 0;
	while (dest[d] != '\0')
		d++;
	while (src[taille] != '\0')
		taille++;
	if (!size)
		return (taille);
	if (size <= d)
		taille = taille + size;
	else
		taille = taille + d;
	while (src[i] != '\0' && (d + 1) < size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (taille);
}
