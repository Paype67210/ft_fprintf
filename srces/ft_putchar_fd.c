/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:04:55 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 12:25:50 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

int	ft_putchar_fd(char c, int fd)
{
	int	count;
	
	count = write(fd, &c, 1);
	return (count);
}
