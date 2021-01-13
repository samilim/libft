/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:55:31 by salimon           #+#    #+#             */
/*   Updated: 2021/01/12 18:01:12 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_create_nb(char *nb, int n, unsigned int i)
{
	unsigned int len;

	len = ft_count(n);
	while (len > i)
	{
		nb[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (nb);
}

char			*ft_itoa(int n)
{
	unsigned int	i;
	char			*nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(nb = malloc(sizeof(char) * (ft_count(n)) + 1)))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		nb[i] = '-';
		i++;
		n = n * -1;
	}
	nb[ft_count(n) + 1] = '\0';
	return (ft_create_nb(nb, n, i));
}
