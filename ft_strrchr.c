/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:45:18 by salimon           #+#    #+#             */
/*   Updated: 2021/01/08 18:49:25 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char       *ft_strrchr(const char *str, int ch)
{
    unsigned int i;

    i = 0;
    while(str[i])
        i++;
    while(i >= 0)
    {
        if(str[i] == (unsigned char)ch)
            return (str[i]);
    }
    return (NULL);
}