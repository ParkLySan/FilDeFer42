/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:42:25 by litoulza          #+#    #+#             */
/*   Updated: 2018/04/16 18:49:05 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstrev (t_list ** alst)
{
	t_list *prev;
	t_list *cur;
	t_list *next;

	prev = NULL;
	cur = *alst;
	while (cur != NULL )
	{
		next = cur-> next;
		cur-> next = prev;
		prev = cur;
		cur = next;
	}
	* alst = prev;
}
