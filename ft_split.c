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

static  int ft_count_world(char const *str, char c)
{
  unsigned int  i;
  unsigned int  count;
  
  i = 0;
  count = 0;
  while (str[i])
  {
    while (str[i] == c))
      i++;
    if (str[i] && str[i] != c)
      count++;
    while (str[i] && str[i] != c)
      i++;
  }
  return (count);
}
        
static  char  *ft_create_sub_tab(char tab **tab, char const *str, char c , int istr)
{
  char            *sub_tab;
  unsigned int         len;
  unsigned int        fill;
  
  len = 0;
  fill = 0;
  while (str[istr] && str[istr] != c))
  {
    len++;
    istr++;
  }
  if (!(sub_tab = malloc(sizeof(char) * (len + 1))))
    return (NULL);
  while (str[istr] && str[istr] != c)
  {
    sub_tab[fill] = str[istr];
    istr++;
    fill++;
  }
  sub_tab[fill] = '\0';
  return (sub_tab);
}

char  **ft_split(char const *str, char c)
{
  char          **tab;
  unsigned int  istr;
  unsigned int  itab;
  
  istr = 0;
  itab = 0;
  if (!str)
    return (NULL);
  if (!(tab = malloc(sizeof(char*) * (ft_count_world(str, c) + 1))))
    return (NULL);
  while (tab[itab + 1])
  {
    while (str[istr] && str[istr] == c))
           istr++;
    if (!ft_create_sub_tab(str, c, istr)
        return (NULL);
    else
        tab[itab] = ft_create_sub_tab(tab, str, c, istr);
    itab++;
    while (str[istr] && str[istr] != c)
        istr++;
  }
  tab[itab] = NULL;
  return (tab);
}
