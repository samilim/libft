/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:47:03 by salimon           #+#    #+#             */
/*   Updated: 2021/01/09 15:56:14 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmb, size_t size)
{
    void *alloc;

    alloc = malloc(nmb * size);
    ft_bzero(alloc,nmb);
    return (alloc);
}