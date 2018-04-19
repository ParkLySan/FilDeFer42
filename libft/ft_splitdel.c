/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:44:32 by litoulza          #+#    #+#             */
/*   Updated: 2018/04/16 18:50:20 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_splitdel ( char ***split)
{
	char	**str;
	int		i;
	i = 0 ;
	str = *split;
	while (*str)
	{
		ft_strdel (str);
		i++;
		str = & (*split) [i];
	}
	ft_memdel (( void **) split);
	return ( 0 );
}
