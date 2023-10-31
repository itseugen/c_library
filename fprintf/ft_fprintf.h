/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:16:50 by eweiberl          #+#    #+#             */
/*   Updated: 2023/10/31 16:46:19 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_fprintf(int fd, const char *str, ...);
int		ft_fputchar(int fd, char c);
int		ft_fputstr(int fd, char *s);
int		ft_fputint(int fd, int n);
int		ft_fputhex(int fd, long n, char *hex);
int		ft_fput_ptr(int fd, void *ptr);
int		ft_fputunsigned(int fd, unsigned int n);
int		ft_fputnbr(int fd, int n);

#endif /* FT_PRINTF_H */