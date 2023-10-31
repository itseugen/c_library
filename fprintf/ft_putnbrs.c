/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:43:32 by eweiberl          #+#    #+#             */
/*   Updated: 2023/10/31 16:53:31 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_fputint(int fd, int n)
{
	int	ccount;

	ccount = 0;
	if (ft_putnbr(fd, n) < 0)
		return (-1);
	if (n <= 0)
		ccount++;
	while (n != 0)
	{
		n = n / 10;
		ccount++;
	}
	return (ccount);
}

int	ft_fputnbr(int fd, int n)
{
	unsigned int	usi;
	char			cnt[10];
	int				count;

	count = 0;
	usi = n;
	if (n == 0)
		return (ft_putchar(fd, '0'));
	if (n < 0)
	{
		usi = -n;
		if (ft_putchar(fd, '-') < 0)
			return (-1);
	}
	while (usi > 0)
	{
		cnt[count] = (usi % 10) + 48;
		usi = usi / 10;
		count++;
	}
	while (count > 0)
		if (ft_putchar(fd, cnt[--count]) < 0)
			return (-1);
	return (0);
}

int	ft_fputhex(int fd, long n, char *hex)
{
	char	buff[9];
	int		i;

	i = 0;
	if (n == 0)
		return (ft_putchar(fd, '0'));
	while (n != 0)
	{
		buff[i] = hex[n % 16];
		n = n / 16;
		i++;
	}
	n = i;
	while (i > 0)
	{
		if (ft_putchar(fd, buff[--i]) < 0)
			return (-1);
	}
	return (n);
}

int	ft_fput_ptr(int fd, void *ptr)
{
	char			buff[16];
	char			*hex;
	int				i;
	unsigned long	n;

	hex = "0123456789abcdef";
	i = 0;
	if (ptr == NULL)
		return (ft_putstr(fd, "0x0"));
	n = (long long)ptr;
	while (n != 0)
	{
		buff[i] = hex[n % 16];
		n = n / 16;
		i++;
	}
	if (ft_putstr(fd, "0x") < 0)
		return (-1);
	n = i + 2;
	while (i > 0)
	{
		if (ft_putchar(fd, buff[--i]) < 0)
			return (-1);
	}
	return (n);
}

int	ft_fputunsigned(int fd, unsigned int n)
{
	char	cnt[10];
	int		count;

	count = 0;
	if (n == 0)
		return (ft_putchar(fd, '0'));
	while (n > 0)
	{
		cnt[count] = (n % 10) + 48;
		n = n / 10;
		count++;
	}
	n = count;
	while (count > 0)
	{
		count--;
		if (ft_putchar(fd, cnt[count]) < 0)
			return (-1);
	}
	return (n);
}
