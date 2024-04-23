/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:59:11 by jpeter            #+#    #+#             */
/*   Updated: 2024/04/23 14:42:08 by philippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fprintf.h"

int	main(void)
{
	static int	fd_log;
	char		*str = "Hello, World!";
	
	if (ft_open_stderr(&fd_log))
		return (EXIT_FAILURE);
	ft_fprintf(fd_log, "Welcome to our program!\n");
	ft_fprintf(fd_log, "This is the test n: %d\n", 1);
	ft_fprintf(fd_log, "This is a test for pointer: %p\n", 0xffffffffffffffff);
	ft_fprintf(fd_log, "This is a test for NULL pointer: %p\n", NULL);
	ft_fprintf(fd_log, "This is a test for string: %s\n", str);
	ft_fprintf(fd_log, "This is a test for NULL string: %s\n", NULL);
	ft_fprintf(fd_log, "This is a test for empty string: %s\n", "");
	ft_fprintf(fd_log, "This is a test for char: %c\n", 'A');
	ft_fprintf(fd_log, "This is a test for int: %d\n", 42);
	ft_fprintf(fd_log, "This is a test for negative int: %d\n", -42);
	ft_fprintf(fd_log, "This is a test for int max: %i\n", INT_MAX);
	ft_fprintf(fd_log, "This is a test for int min: %i\n", INT_MIN);
	ft_fprintf(fd_log, "This is a test for unsigned int: %u\n", 42);
	ft_fprintf(fd_log, "This is a test for UI overflow: %u\n", UINT_MAX + 1);
	ft_fprintf(fd_log, "This is a test for UI underflow: %u\n", -1);
	ft_fprintf(fd_log, "This is a test for hexadecimal: %x\n", 10);
	ft_fprintf(fd_log, "This is a test for hexadecimal underflow: %X\n", -1000);
	ft_fprintf(fd_log, "This is a test for capital hexadecimal: %X\n", 42);
	ft_fprintf(fd_log, "This is a test for percentage: %%\n");
	ft_fprintf(fd_log, "This is a test for fullfill percentage: %%%%%%%\n");
	
	close(fd_log);
	ft_run_malloc(4);
	return (EXIT_SUCCESS);
}
