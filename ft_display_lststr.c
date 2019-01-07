/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_lst.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 07:50:11 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 08:50:43 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_display_lststr(t_list *lst, char c)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_putstr(lst->content);
		ft_putchar(c);
		lst = lst->next;
	}
}
