/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 10:40:57 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 12:22:48 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_lst;
	t_list	*tamp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	tamp = f(lst);
	if (!(new = ft_lstnew(tamp->content, tamp->content_size)))
		return (NULL);
	begin_lst = new;
	lst = lst->next;
	while (lst)
	{
		tamp = f(lst);
		if (!(new->next = ft_lstnew(tamp->content, tamp->content_size)))
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	return (begin_lst);
}
