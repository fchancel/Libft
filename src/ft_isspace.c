/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isspace.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fchancel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 07:02:07 by fchancel     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 07:16:37 by fchancel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if ((c == '\t') || (c == '\n') || (c == '\r') ||
			(c == '\v') || (c == '\f') || (c == ' '))
		return (1);
	else
		return (0);
}
