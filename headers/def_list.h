/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   def_list.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:40:13 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 09:12:16 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIST_H
# define DEF_LIST_H

typedef struct s_list{
	void			*content;
	size_t			size;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

#endif
