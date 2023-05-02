/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:57 by eweiberl          #+#    #+#             */
/*   Updated: 2023/04/25 14:36:57 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = 0;
	}
	if (!s2)
		return (s1);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
	{
		free(s1);
		return (NULL);
	}
	str[0] = '\0';
	ft_strlcat(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	free(s1);
	return (str);
}

// size_t	ft_strlen(const char *s)
// {
// 	int	str_len;

// 	str_len = 0;
// 	while (s[str_len] != '\0')
// 		str_len++;
// 	return (str_len);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	unsigned int	i_dst;
// 	unsigned int	i_src;
// 	unsigned int	dest_len;

// 	dest_len = ft_strlen(dst);
// 	i_dst = dest_len;
// 	i_src = 0;
// 	if (dstsize == 0 || dstsize <= dest_len)
// 		return (ft_strlen(src) + dstsize);
// 	while ((i_src < dstsize - dest_len - 1) && src[i_src] != '\0')
// 	{
// 		dst[i_dst++] = src[i_src++];
// 	}
// 	dst[i_dst] = '\0';
// 	return (dest_len + ft_strlen(src));
// }

char	*gnl_strchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	if (*str == (unsigned char)c)
		return (str);
	while (*str++)
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	return (NULL);
}
