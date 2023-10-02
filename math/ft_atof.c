/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:06:41 by eweiberl          #+#    #+#             */
/*   Updated: 2023/10/02 16:07:22 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

/// @brief Converts a string to a double
/// @param str the string to convert
/// @return returns a double
double	ft_atof(const char *str)
{
	double	num;
	double	comma;
	int		i;
	int		is_n;

	i = 0;
	is_n = 1;
	comma = 0;
	num = (double)ft_atoi(str);
	while (str[i] != '\0' && str[i] != '.')
	{
		if (str[i] == '-')
			is_n = -1;
		i++;
	}
	if (str[i] == '.')
		comma = (double)ft_atoi(str + i + 1);
	while (comma >= 1)
		comma = comma / 10;
	if (is_n == -1)
		return (num - comma);
	return (num + comma);
}
