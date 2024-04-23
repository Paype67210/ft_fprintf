/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:04:55 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 13:49:33 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;
	
	if (!s)
		s = PTRNULL;
	count = write(fd, s, ft_strlen(s));
	return (count);
}
