/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:06:16 by salimon           #+#    #+#             */
/*   Updated: 2021/01/09 18:43:59 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int i;
    unsigned int j;
    unsigned int len_totale;
    unsigned char *res;

    i = 0;
    j = 0;
    len_totale = (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!(res = malloc(sizeof(char) * len_totale)))
        return (NULL);
    while(s1[i++])
        res[i] = s1[i];
    while(s2[j++])
    {
        res[i] = s2[j];
        i++;
    }
    res[i] = '\0';
    return(res);
}
