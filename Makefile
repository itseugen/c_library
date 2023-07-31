# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eweiberl <eweiberl@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 15:58:47 by eweiberl          #+#    #+#              #
#    Updated: 2023/07/31 16:21:51 by eweiberl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCE = check/ft_isalnum.c check/ft_isalpha.c check/ft_isascii.c\
		check/ft_isdigit.c check/ft_isprint.c check/ft_isstr.c
SOURCE += lists/ft_lstnew.c lists/ft_lstadd_front.c lists/ft_lstsize.c\
		lists/ft_lstlast.c lists/ft_lstadd_back.c lists/ft_lstdelone.c\
		lists/ft_lstclear.c lists/ft_lstiter.c lists/ft_lstmap.c
SOURCE += math/ft_atoi.c math/ft_itoa.c
SOURCE += mem/ft_bzero.c mem/ft_calloc.c mem/ft_memcpy.c mem/ft_memmove.c\
		mem/ft_memset.c mem/ft_memchr.c mem/ft_memcmp.c
SOURCE += string/ft_split.c string/ft_strchr.c string/ft_strrchr.c string/ft_strncmp.c\
		string/ft_strnstr.c string/ft_strdup.c string/ft_substr.c string/ft_strjoin.c\
		string/ft_strtrim.c string/ft_strmapi.c string/ft_striteri.c string/ft_strlen.c\
		string/ft_strlcpy.c string/ft_strlcat.c string/ft_toupper.c string/ft_tolower.c
SOURCE += write/ft_putchar_fd.c write/ft_putstr_fd.c write/ft_putendl_fd.c write/ft_putnbr_fd.c
SOURCE += printf/ft_printf.c printf/ft_putchar_str.c printf/ft_putnbrs.c printf/printcolour.c\
		printf/printcolours2.c
SOURCE += gnl/get_next_line.c gnl/get_next_line_utils.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

debug: $(OBJS)
	ar rcs $(NAME) -g $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re clean_obj
