/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:34:20 by salimon           #+#    #+#             */
/*   Updated: 2021/01/10 16:36:07 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int ft_is_c(char const to_compare, char c)
{
  if (to_compare == c)
    return (1);
  else
    return (0);
}

static  int ft_count_world(char const *str, char c)
{
  unsigned int  i;
  unsigned int  count;
  
  i = 0;
  count = 0;
  while (str[i])
  {
    while (ft_is_c(str[i], c))
      i++;
    if (str[i] && !(ft_is_c(str[i], c))
      count++;
    while (ft_is_c(str[i], c) && str[i])
      i++;
  }
  return (count);
}

char  **ft_split(char const *str, char c)
{
  char          **tab;
  unsigned int  i;
  unsigned int  index;
  
  i = 0;
  index = 0;
  if (!str)
    return (NULL);
  if (!(tab = malloc(sizeof(char*) * (ft_count_world(str, c) + 1))))
    return (NULL);
  while (*tab[i++])
  {
    while ()
  }
  *tab[i] = '\0';
  return (tab);
}
