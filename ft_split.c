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

static  int ft_count_word(char const *str, char c)
{
  unsigned int  i;
  unsigned int  count;
  
  i = 0;
  count = 0;
  while (str[i])
  {
    while (str[i] && str[i] == c)
      i++;
    if (str[i] && str[i] != c)
      count++;
    while (str[i] && str[i] != c)
      i++;
  }
  return (count);
}
        
static  char  *ft_create_sub_tab(char const *str, char c , int istr)
{
  char            *sub_tab;
  unsigned int         len;
  unsigned int        fill;
  
  len = 0;
  fill = 0;
  while (str[istr] && str[istr] != c)
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
  if (!(tab = malloc(sizeof(char*) * (ft_count_word(str, c) + 1))))
    return (NULL);
  while (tab[itab + 1])
  {
    while (str[istr] && str[istr] == c)
           istr++;
    if (!(ft_create_sub_tab(str, c, istr)))
        return (NULL);
    else
        tab[itab] = ft_create_sub_tab(str, c, istr);
    itab++;
    while (str[istr] && str[istr] != c)
        istr++;
  }
  tab[itab] = NULL;
  return (tab);
}





BIS



static int ft_count_words(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char *ft_splited_str(char const *str, char c, int lecture)
{
	int i;
	char *sub_str;

	i = 0;
	while (str[lecture + i] != c)
		i++;
	if (!(sub_str = malloc(sizeof(char) * (i + 1))))
	    return (NULL);
	i = 0;
	while (str[lecture] != c)
	{
		sub_str[i] = str[lecture];
		lecture++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char **ft_split(char const *str, char c)
{
	char **tab;
	int istr;
	int itab;

	if (!str || !(tab = malloc(sizeof(char*) * (ft_count_words(str, c) + 1))))
	    return (NULL);
	tab[ft_count_words(str, c)] = NULL;
	istr = 0;
	itab = 0;
	while (str[istr])
	{
	    while (str[istr] && str[istr] == c)
			istr++;
		if (str[istr] && (itab < ft_count_words(str, c)))
		{
		    if (!ft_splited_str(str, c, istr))
		        return (NULL);
			tab[itab] = ft_splited_str(str, c, istr);
			itab++;
		}
		while (str[istr] && str[istr] != c)
			istr++;
	}
	return (tab);
}


int main()
{
    ft_split("hellou hibou heyy hello", 'h');
    return 0;
}
