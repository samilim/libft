/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salimon <salimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:13:31 by salimon           #+#    #+#             */
/*   Updated: 2021/01/12 18:16:54 by salimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (!(new_lst = malloc(sizeof(t_list) * ft_lstsize(lst))))
		return (NULL);
	while (new_lst)
	{
		tmp = next->lst;
		new_lst = (f)(lst->content);
		new_lst = new_lst->next;
		lst = tmp;
	}
	return (new_lst);
}
