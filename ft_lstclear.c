#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t-list  *tmp;
  
  tmp = *lst;
  while (*lst)
  {
    tmp = lst->next;
    ft_lstdelone(lst, (del));
    lst = tmp;
  }
}
