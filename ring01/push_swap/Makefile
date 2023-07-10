# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scespede <scespede@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 13:00:41 by scespede          #+#    #+#              #
#    Updated: 2023/07/10 17:21:53 by scespede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_push_swap.a


LIB = libft/

PRINTF = ft_push_swap.h


LIBA = libft

OBJECTS = push_swap.o

DEPS = $(OBJECTS:.o=.d)

CC = cc -Wall -Werror -Wextra -MMD

LIBRAR = ar rcs

HEADERS = includes/libft.h

LIBTARGET	= libft/libft.a

LIBS_DIR := $(dir $(LIBTARGET))

all: ${NAME}
#callforlib

#problemas relink necesita una dependencia si cambian el libft.a

${NAME}:  ${OBJECTS}
	make -C ${LIB}
	cp ${LIBTARGET} ${NAME}
	${LIBRAR} ${NAME} ${OBJECTS}


#${LIBRAR} ${NAME} ${OBJECTS}

%.o : %.c ${PRINTF} 
	$(CC) -c -o $@ $< $(CFLAGS)

fclean: clean	
	make fclean -C ${LIBA}
	rm -f ${NAME}

clean:
	make clean -C ${LIBA}
	rm -f ${OBJECTS}

re: fclean ${NAME}

${LIBTARGET}:
	make -C ${LIB}
	

callforlib :
	make -C ${LIB}
	make -C . ${NAME}
	


.PHONY: all clean fclean re bonus








#ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_punbr_fd.o
