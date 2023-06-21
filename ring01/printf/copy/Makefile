# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scespede <scespede@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 13:00:41 by scespede          #+#    #+#              #
#    Updated: 2023/06/15 10:54:11 by scespede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


LIB = libft/

PRINTF = ft_printf.h


LIBA = libft

OBJECTS = ft_printf.o  ft_printhex.o  ft_print_s.o ft_print_ptr.o ft_print_c.o ft_print_u.o ft_print_d.o
DEPS = $(OBJECTS:.o=.d)

CFLAGS = -Wall -Werror -Wextra -MMD

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

%.o : %.c ${PRINTF} Makefile 
	cc -c ${CFLAGS} $< -o $@

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
