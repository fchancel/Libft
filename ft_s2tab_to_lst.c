/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_s2tab_to_lst.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 12:10:53 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 16:40:08 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_s2tab_to_lst(char **s2tab)
{
	t_list	*lst;
	t_list	*begin_lst;
	int		i;

	i = 0;
	if (!s2tab)
		return (NULL);
	if (!(lst = ft_lstnew(s2tab[i], sizeof(char) * ft_strlen(s2tab[i]))))
		return (NULL);
	begin_lst = lst;
	while (s2tab[++i])
	{
		if (!(lst->next = ft_lstnew(s2tab[i],
						sizeof(char) * ft_strlen(s2tab[i]))))
			return (NULL);
		lst = lst->next;
	}
	return (begin_lst);
}
