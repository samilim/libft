/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:34:00 by salimon           #+#    #+#             */
/*   Updated: 2021/01/10 16:36:07 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int i;
  char *res;
  
  i = 0;
  if (!s || !(res = malloc(sizeof(char) * ft_strlen(s) + 1)))
    return (NULL);
  while (res[i++])
    res[i] =  (*f)(i, s[i]);
  res[i] = '\0';
  return (res);
}
