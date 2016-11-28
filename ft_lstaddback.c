/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:59:26 by jmunoz            #+#    #+#             */
/*   Updated: 2016/11/28 11:00:06 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst && new)
	{
		tmp = *alst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
