# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scespede <scespede@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 13:00:41 by scespede          #+#    #+#              #
#    Updated: 2023/05/05 15:12:21 by scespede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = ft_strchr.o  ft_toupper.o ft_isalpha.o ft_isdigit.o \
		  ft_strlen.o ft_tolower.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		  ft_strlcpy.o
CFLAGS = -Wall -Werror -Wextra

LIBRAR = ar rc

HEADERS = libft.h

all: ${NAME}

${NAME}: ${OBJECTS}
		 ${LIBRAR} ${NAME} ${OBJECTS}  


%.o : %.c ${libft.h}
	cc -c ${CFLAGS} $< -o $@




fclean: clean	
	rm -f ${NAME}

clean:
	rm -f ${OBJECTS}

re: fclean ${NAME}

.PHONY: all clean fclean re bonus

