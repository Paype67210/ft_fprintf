/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:04:55 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 13:47:43 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	count;
	
	if (!s)
		return (0);
	count = ft_putstr_fd(s, fd);
	count += ft_putchar_fd('\n', fd);
	return (count);
}
