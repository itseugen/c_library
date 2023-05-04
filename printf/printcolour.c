/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcolour.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:56:07 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/04 16:03:24 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	red(void)
{
	printf("\033[0;31m");
}

void	black(void)
{
	ft_printf("\033[0;30m");
}

void	green(void)
{
	ft_printf("\033[0;32m");
}

void	yellow(void)
{
	ft_printf("\033[0;33m");
}

void	reset(void)
{
	ft_printf("\033[0m");
}
