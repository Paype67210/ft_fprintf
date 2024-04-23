/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprintf.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:50:00 by pdeson            #+#    #+#             */
/*   Updated: 2024/04/23 14:27:05 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FPRINTF_H
# define FPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <time.h>
# include <stdbool.h>
# include <dirent.h>
# include <sys/stat.h>
# include "../headers/def_list.h"

# define LOG_DIR "./.varlog"
# define FILE_PREFIX "debug"

# if defined (__linux__)
#  define PTRNULL "(nil)"
# elif defined (__APPLE__)
#  define PTRNULL "0x0"
# endif

/* PROGS ANNEXES */

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char *s);

/* CREATION DU FICHIER DE LOG JOURNALIER */
int	    ft_create_log_dir(void);
void	get_current_date(char *date_str);
void	get_current_time(char *date_str);
int	    ft_open_log(int *fd);
int 	ft_open_stderr(int *fd);

/* ECRITURE DANS UN FD DONNE */

int	    ft_putendl_fd(char *s, int fd);
int 	ft_putchar_fd(char c, int fd);
int	    ft_putnbr_fd(int nb, int fd);
int	    ft_putstr_fd(char *s, int fd);
int	    ft_putptr_fd(unsigned long long ptr, int fd);
int     ft_putnbr_base_fd(long int nb, char format, int fd);

/* RUN_MALLOC */

void	*ft_malloc(t_list **ouille, size_t size);
int 	*ft_realloc(t_list **list, void *ptr, size_t size);
int 	ft_free(t_list **ouille, void *ptr);
int	    ft_freeall(t_list **ouille);
void	*ft_run_malloc(int function, ...);
void	ft_bzero(void *mtr, size_t n);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

/* FPRINTF */

int		ft_fprintf(int fd_log, const char *format, ...);
int		ft_formats(va_list args, const char format, int fd_log);

#endif
