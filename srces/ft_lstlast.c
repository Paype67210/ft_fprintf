/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:43:24 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 10:09:07 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*buffer;

	if (!lst)
		return (NULL);
	buffer = lst;
	while (buffer->next)
			buffer = buffer->next;
	return (buffer);
}
