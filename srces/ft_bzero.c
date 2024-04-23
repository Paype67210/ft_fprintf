/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:50:00 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 10:07:22 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

void	ft_bzero(void *mtr, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = mtr;
	i = 0;
	if (n > 0)
	{
		while (i < n)
			p[i++] = '\0';
	}
	return ;
}
