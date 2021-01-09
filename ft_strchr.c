/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:14:55 by salimon           #+#    #+#             */
/*   Updated: 2021/01/08 18:44:06 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *str, int ch)
{
    unsigned int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == (unsigned char)ch)
            return (str[i]);
    }
    return (NULL);
}