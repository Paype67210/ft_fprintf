/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:50:47 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 10:07:59 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

char	*ft_strdup(char *s)
{
	int		i;
	int		size;
	char	*buffer;

	i = 0;
	size = ft_strlen(s);
	buffer = ft_run_malloc(1, sizeof(char) * (size + 1));
	if (!buffer)
		return (0);
	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
