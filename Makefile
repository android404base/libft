# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydag <ydag@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 16:41:38 by ydag           #+#    #+#                 #
#    Updated: 2019/10/31 19:06:40 by ydag          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = src/*.c

OUT = *.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all