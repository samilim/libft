/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:46:42 by salimon           #+#    #+#             */
/*   Updated: 2021/01/09 17:46:21 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int botte;
	int aiguille;

	botte = 0;
	if (*to_find == '\0')
		return (str);
	while (str[botte] != '\0' && botte < n)
	{
		aiguille = 0;
		while (str[botte + aiguille] == to_find[aiguille])
		{
			if (to_find[aiguille + 1] == '\0')
				return (&str[botte]);
			aiguille++;
		}
		botte++;
	}
	return (0);
}