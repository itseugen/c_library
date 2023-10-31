/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:46:20 by eweiberl          #+#    #+#             */
/*   Updated: 2023/10/31 16:53:29 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static size_t	ft_strlen(const char *s);

int	ft_fputchar(int fd, char c)
{
	return (write(fd, &c, 1));
}

int	ft_fputstr(int fd, char *s)
{
	if (s == NULL)
		return (write(fd, "(null)", 6));
	return (write(fd, s, ft_strlen(s)));
}

static size_t	ft_strlen(const char *s)
{
	int	str_len;

	str_len = 0;
	while (s[str_len] != '\0')
		str_len++;
	return (str_len);
}
