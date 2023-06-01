/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:43:32 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/01 12:04:22 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	int	ccount;

	ccount = 0;
	if (ft_putnbr(n) < 0)
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

int	ft_putnbr(int n)
{
	unsigned int	usi;
	char			cnt[10];
	int				count;

	count = 0;
	usi = n;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		usi = -n;
		if (ft_putchar('-') < 0)
			return (-1);
	}
	while (usi > 0)
	{
		cnt[count] = (usi % 10) + 48;
		usi = usi / 10;
		count++;
	}
	while (count > 0)
		if (ft_putchar(cnt[--count]) < 0)
			return (-1);
	return (0);
}

int	ft_puthex(long n, char *hex)
{
	char	buff[9];
	int		i;

	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n != 0)
	{
		buff[i] = hex[n % 16];
		n = n / 16;
		i++;
	}
	n = i;
	while (i > 0)
	{
		if (ft_putchar(buff[--i]) < 0)
			return (-1);
	}
	return (n);
}

int	ft_put_ptr(void *ptr)
{
	char			buff[16];
	char			*hex;
	int				i;
	unsigned long	n;

	hex = "0123456789abcdef";
	i = 0;
	if (ptr == NULL)
		return (ft_putstr("0x0"));
	n = (long long)ptr;
	while (n != 0)
	{
		buff[i] = hex[n % 16];
		n = n / 16;
		i++;
	}
	if (ft_putstr("0x") < 0)
		return (-1);
	n = i + 2;
	while (i > 0)
	{
		if (ft_putchar(buff[--i]) < 0)
			return (-1);
	}
	return (n);
}

int	ft_putunsigned(unsigned int n)
{
	char	cnt[10];
	int		count;

	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
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
		if (ft_putchar(cnt[count]) < 0)
			return (-1);
	}
	return (n);
}
