/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:36 by eweiberl          #+#    #+#             */
/*   Updated: 2023/04/25 14:36:36 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str[4096];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = read_till(fd, str[fd]);
	if (str[fd] == NULL)
		return (NULL);
	line = set_line(str[fd]);
	str[fd] = free_line(str[fd]);
	return (line);
}

char	*read_till(int fd, char *str)
{
	char	*temp;
	int		bytes_read;

	bytes_read = 1;
	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (!ft_strchr(str, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(str);
			free(temp);
			temp = NULL;
			return (NULL);
		}
		if (bytes_read == 0)
			return (free(temp), (str));
		temp[bytes_read] = '\0';
		str = ft_strjoin(str, temp);
		if (!str)
			return (free(temp), NULL);
	}
	return (free(temp), str);
}

char	*set_line(char *str)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = str[i];
	if (line[i] != '\0')
		line[++i] = '\0';
	return (line);
}

char	*free_line(char	*str)
{
	size_t	i;
	size_t	i_temp;
	char	*temp;

	i = 0;
	i_temp = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (free(str), NULL);
	temp = malloc(ft_strlen(str) - i + 1);
	if (!temp)
		return (free(str), NULL);
	i++;
	while (str[i] != '\0')
	{
		temp[i_temp] = str[i];
		i++;
		i_temp++;
	}
	temp[i_temp] = '\0';
	return (free(str), temp);
}
