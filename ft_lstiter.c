/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 09:16:27 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 09:43:19 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		while (lst->next != NULL)
		{
			f(lst);
			lst = lst->next;
		}
		f(lst);
	}
}
