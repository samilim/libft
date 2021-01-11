#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *new_lst;
  t_list  *tmp;
  
  if (!(new_list = malloc(sizeof(t_list) * ft_lstsize(lst))))
    return (NULL);
  while (new_lst)
  {
    tmp = next->lst;
    new_lst = (f)(lst);
    new_lst = new_list->next;
    lst = tmp;
  }
  return (new_list);
}
