/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcolours2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:37 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/04 16:05:46 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	blue(void)
{
	ft_printf("\033[0;34m");
}

void	purple(void)
{
	ft_printf("\033[0;35m");
}

void	cyan(void)
{
	ft_printf("\033[0;36m");
}

void	white(void)
{
	ft_printf("\033[0;37m");
}
