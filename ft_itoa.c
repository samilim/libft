/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:55:31 by salimon           #+#    #+#             */
/*   Updated: 2021/01/09 19:03:19 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>


int     ft_count(int n)
{
    int i;
    
    i = 1;
    if (n < 0)
    {
        n = n *-1;
        i++;
    }
    while (n >= 10)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_create_nb(char *nb, int n)
{
	int i;
	
	i = 0;
	if (n >= 10)
	{
	    ft_create_nb(nb[i++], n / 10);
		nb[i] = (n % 10 + '0');
	}
	else
	    nb[i] = (n + '0');
    return (nb);
}

char    *ft_itoa(int n)
{
    unsigned int i;
    char         *nb;
    
    if (!(nb = malloc(sizeof(char) * (ft_count(n)) + 1)))
        return (NULL);
    while (nb[i])
    {
        if (n < 0)
        {
            nb[i] = '-';
            i++;
            n = n * -1;
        }
        nb[ft_count(n)] = '\0';
        return (ft_create_nb(nb, n));
    }
}

int main()
{
    printf("%d",ft_count());

    return 0;
}
