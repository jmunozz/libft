/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:00:22 by jmunoz            #+#    #+#             */
/*   Updated: 2016/11/28 11:00:34 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"

t_list	*ft_lstcpy(void *content, size_t content_size)
{
	t_list	*elem;

	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	elem->content = content;
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}
