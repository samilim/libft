#include "libft.h"

int f_charset(char c, char *charset)
{
  int i;
  
  i = 0;
  while (charset[i])
  {
    if (c == charset[i])
      return (1);
    i++;
  }
  return (0);
}

int count_words(char *str, char *charset)
{
  int i;
  int count;
  
  i = 0;
  while (str[i])
  {
    while (str[i] && f_charset(str[i], charset))
      i++;
    if (str[i] && !f_charset(str[i], charset))
      count++;
    while (str[i] && !f_charset(str[i], charset))
      i++;
  }
  return (count);
}

char *splited_str(char *str, char *charset, int lecture)
{
  int i;
  char *sub_str;

  i= 0;
  while (!f_charset(str[lecture + i], charset))
    i++;
  sub_str = malloc(sizeof(char) * (i + 1));
  i = 0;
  while (!f_charset(str[lecture], charset))
  {
    sub_str[i] = str[lecture];
    lecture++;
    i++;
  }
  sub_str[i] = '\0';
  return (sub_str);
}

char **ft_split(char *str, char *charset)
{
  char **dest;
  int i;
  int d;
  int nb_words;
  
  nb_words = count_words(str, charset);
  if ((!str) || !(dest = malloc(sizeof(char*) * (nb_words + 1))))
    return (NULL);
  dest[nb_words] = NULL;
  i = 0;
  d = 0;
  while (str[i])
  {
    while (str[i] && f_charset(str[i], charset))
      i++;
    if (d < nb_words)
    {
      dest[d] = splited_str(str, charset, i);
      d++;
    }
    while (str[i] && !f_charset(str[i], charset))
      i++;
  }
  return (dest);
}



/*
int          main()
{
  char *str = "    hey coucou hello hibou";
  char **split;
  int i;

  i = 0;
  split = ft_split(str, "");
  while (split[i])
  {
    printf("i = %d, split = %s\n", i, split[i]);
    i++;
  }
  return (0);
}

#include <unistd.h>

void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}

int main(void)
{
char *str = "abc abc abc";
char *charset = "b";
char **array = NULL;
int i = 0;

ft_putstr("With str = \"abc abc abc\" and charset = \"b\" :\n");
if ((array = ft_split(str, charset)))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"abc abc abc\" and charset = \"b \" :\n");
if ((array = ft_split(str, "b ")))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"abc abc abc\" and charset = \"abc \" :\n");
if ((array = ft_split(str, "abc ")))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"abc abd abc\" and charset = \"d\" :\n");
if ((array = ft_split(str, "d")))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"abc abc abc\" and charset = \"\" :\n");
if ((array = ft_split(str, "")))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"abc abc abc\" and charset = \"NULL\" :\n");
if ((array = ft_split(str, NULL)))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
i = 0;
ft_putstr("With str = \"NULL\" and charset = \"b\" :\n");
if ((array = ft_split(NULL, "d")))
{
while (array[i] != NULL)
{
ft_putstr(array[i]);
write(1, "\n", 1);
free(array[i++]);
}
}
free(array);
return (0);
}

#include <stdio.h>
int main()
{
char str[] = "abc abc abc";
char sep[] = " ";
char **result;
int i;

i = 0;
result = ft_split(str, sep);
while (result[i])
{
printf("%s\n", result[i]);
i++;
}
}
*/
