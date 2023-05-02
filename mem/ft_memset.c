/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:54:16 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/02 15:44:07 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*str2;

	str2 = str;
	i = 0;
	while (i < n)
	{
		str2[i] = c;
		i++;
	}
	return (str);
}
