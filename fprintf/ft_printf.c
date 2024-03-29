/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:17:21 by eweiberl          #+#    #+#             */
/*   Updated: 2023/11/02 17:48:13 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	varhandle(int fd, char c, va_list args);
static int	printfunc(int fd, const char *str, int ccount, va_list args);
/*
* DONE • %c Prints a single character.
* DONE • %s Prints a string (as defined by the common C convention).
* DONE • %p The void * pointer argument has to be printed in hexadecimal format.
* DONE • %d Prints a decimal (base 10) number.
* DONE • %i Prints an integer in base 10.
* DONE • %u Prints an unsigned decimal (base 10) number.
* DONE • %x Prints a number in hexadecimal (base 16) lowercase format.
* DONE • %X Prints a number in hexadecimal (base 16) uppercase format.
* DONE • %% Prints a percent sign.
*/

int	ft_fprintf(int fd, const char *str, ...)
{
	int		ccount;
	va_list	args;

	va_start(args, str);
	ccount = printfunc(fd, str, 0, args);
	va_end(args);
	return (ccount);
}

static int	printfunc(int fd, const char *str, int ccount, va_list args)
{
	size_t	i;
	int		wrtfail;

	i = 0;
	wrtfail = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			wrtfail = varhandle(fd, str[++i], args);
			if (wrtfail == 0 && str[i] != 's')
				wrtfail = write(fd, &str[i], 1);
			if (wrtfail < 0)
				return (-1);
			ccount = ccount + wrtfail;
		}
		else
		{
			if (write(fd, &str[i], 1) < 0)
				return (-1);
			ccount++;
		}
		i++;
	}
	return (ccount);
}

static int	varhandle(int fd, char c, va_list args)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt = ft_fputchar(fd, va_arg(args, int));
	if (c == 's')
		cnt = ft_fputstr(fd, va_arg(args, char *));
	if (c == '%')
		cnt = ft_fputchar(fd, '%');
	if (c == 'i' || c == 'd')
		cnt = ft_fputint(fd, va_arg(args, int));
	if (c == 'x')
		cnt = ft_fputhex(fd, (long)va_arg(args, unsigned int),
				"0123456789abcdef");
	if (c == 'X')
		cnt = ft_fputhex(fd, (long)va_arg(args, unsigned int),
				"0123456789ABCDEF");
	if (c == 'p')
		cnt = ft_fput_ptr(fd, va_arg(args, void *));
	if (c == 'u')
		cnt = ft_fputunsigned(fd, va_arg(args, unsigned int));
	return (cnt);
}
