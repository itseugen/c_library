/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:16:50 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/04 16:05:57 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putint(int n);
int		ft_puthex(long n, char *hex);
int		ft_put_ptr(void *ptr);
int		ft_putunsigned(unsigned int n);
int		ft_putnbr(int n);


/* ************************************************************************** */
/*                                  COLOURS                                   */
/* ************************************************************************** */

void	reset(void);
void	red(void);
void	black(void);
void	green(void);
void	yellow(void);
void	blue(void);
void	purple(void);
void	cyan(void);
void	white(void);

#endif /* FT_PRINTF_H */