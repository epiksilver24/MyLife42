# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scespede <scespede@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 13:00:41 by scespede          #+#    #+#              #
#    Updated: 2023/06/28 14:00:37 by scespede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

OBJECTS = get_next_line.o get_next_line_utils.o	
CFLAGS = -Wall -Werror -Wextra

LIBRAR = ar rc

HEADERS = get_next_line.h

all: ${NAME} 

${NAME}: ${OBJECTS}
		 ${LIBRAR} ${NAME} ${OBJECTS}


%.o : %.c ${HEADERS} Makefile
		cc -c ${CFLAGS} $< -o $@

fclean: clean	
	rm -f ${NAME}

clean:
	rm -f ${OBJECTS}
	rm -f ${BONUS}
	
re: fclean ${NAME}

.PHONY: all clean fclean re bonus 

