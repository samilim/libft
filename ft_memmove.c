/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:04:31 by salimon           #+#    #+#             */
/*   Updated: 2021/01/12 18:24:13 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cd;
	char		*cs;

	i = 0;
	cd = (char *)dest;
	cs = (char *)src;
	if (cs < cd)
	{
		while (n > i)
		{
			cd[n - 1] = cs[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	return (dest);
}
