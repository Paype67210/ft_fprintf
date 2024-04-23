/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:12:16 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 13:06:34 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	buffer = ft_run_malloc(1, sizeof(char) * \
		(ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!buffer)
		return (NULL);
	i = -1;
	j = -1;
	while (s1 && s1[++i] != '\0')
		buffer[i] = s1[i];
	while (s2 && s2[++j] != '\0')
		buffer[i + j] = s2[j];
	buffer[i + j] = '\0';
	return (buffer);
}
