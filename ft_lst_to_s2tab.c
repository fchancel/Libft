/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_to_s2tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 14:29:15 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 16:39:56 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lst_to_s2tab(t_list *lst)
{
	char	**array;
	int		i;

	i = 0;
	if (!lst)
		return (NULL);
	if (!(array = ft_memalloc(sizeof(char *) * (ft_lstcount(lst) + 1))))
		return (NULL);
	while (lst)
	{
		if (!(array[i] = ft_strsub(lst->content, 0, lst->content_size)))
			return (NULL);
		i++;
		lst = lst->next;
	}
	array[i] = NULL;
	return (array);
}
