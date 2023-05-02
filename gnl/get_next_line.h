/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:22:54 by eweiberl          #+#    #+#             */
/*   Updated: 2023/05/02 17:24:59 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdlib.h>
# include "../libft.h"

char	*gnl_strjoin(char *s1, char *s2);
// size_t	ft_strlen(const char *s);
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*gnl_strchr(const char *s, int c);
char	*free_line(char	*str);
char	*set_line(char *str);
char	*read_till(int fd, char *str);
char	*get_next_line(int fd);
#endif
