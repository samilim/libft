/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:47:03 by salimon           #+#    #+#             */
/*   Updated: 2021/01/16 13:20:27 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	void	*alloc;

	if (!(alloc = (char *)malloc(nmb * size)))
		return (NULL);
	ft_bzero(alloc, nmb * size);
	return (alloc);
}
