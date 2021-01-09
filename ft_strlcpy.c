/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:45:54 by salimon           #+#    #+#             */
/*   Updated: 2021/01/09 17:31:04 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
    unsigned int d;
    unsigned int taille;

	i = 0;
    d = 0;
    taille = 0;
    while (dest[d])
        d++;
    while (src[taille])
        taille++;
    if (size <= d)
        taille = taille + size;
    else
        taille = taille + d;
	while (src[i] != '\0' && (d + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (taille);
}