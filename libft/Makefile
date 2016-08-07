#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/04/26 18:31:38 by lsudre            #+#    #+#             *#
#*   Updated: 2016/07/19 11:45:10 by lsudre           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#


NAME = libft.a

SOURCES = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isdigit.o ft_islower.o ft_isprint.o ft_isspace.o ft_isupper.o \
	ft_itoa.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o \
	ft_lstmap.o ft_lstnew.o ft_memalloc.o ft_memccpy.o ft_memchr.o \
	ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o \
	ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
	ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_strcat.o ft_strchr.o \
	ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o \
	ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o \
	ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o \
	ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
	ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o \
	get_next_line.o \

HEADERS	= -Iincludes/

OBJECTS	= $(subst .c,.o,$(SOURCES))

WFLAGS	= -g -Wall -Werror -Wextra

CC	= gcc


.SILENT: @

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@printf "\e[32m----------------------------------\e[36m\n"
	@printf "\e[32m[✔]\e[36m $@"
	@printf "\n\e[32m----------------------------------\e[36m"
	@printf "\033[0m\n"

%.o: %.c
	@$(CC) $(WFLAGS) $(HEADERS) -c -o $@ $^
	@printf "\e[32m[✔]\e[36m $@ "
	@printf "\033[0m\n"

clean:
	@rm -rf $(OBJECTS)
	@printf "\e[31m----------------------------------\n"
	@printf "[✔]\e[36m $(NAME): Objects deleted\n"
	@printf "\e[31m----------------------------------\e[36m"
	@printf "\033[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\e[31m----------------------------------\n"
	@printf "[✔]\e[36m $(NAME): All deleted\n"
	@printf "\e[31m----------------------------------\e[36m"
	@printf "\033[0m\n"

re: fclean all

.PHONY: re fclean clean all
