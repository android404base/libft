# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydag <ydag@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 16:41:38 by ydag           #+#    #+#                 #
#    Updated: 2019/11/20 12:23:01 by ydag          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c  ft_bzero.c \
			ft_calloc.c ft_free_all.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_islower.c ft_isprint.c \
			ft_isspace.c ft_isupper.c ft_itoa.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strcmp.c ft_strcpy.c ft_strdup.c \
			ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strmapi.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c \
			ft_substr.c ft_tolower.c ft_toupper.c \

SRCS_BNS =  ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 
			
OUT =		$(SRCS:%.c=%.o)

OUT_B =   	$(SRCS_BNS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
%.o : %.c
	@echo "Compiling $<"
	@gcc $(FLAGS) -c -o $@ $<

$(NAME): $(OUT)
	@ar rc $(NAME) $(OUT)
	@ranlib $(NAME)
	@echo "Created $(NAME)"

bonus : $(OUT) $(OUT_B)
	@ar rc $(NAME) $(OUT_B)
	@ranlib $(NAME)
	@echo "Created $(NAME) with bonus"
	
clean:
	@echo "Cleaning $(NAME)"
	@/bin/rm -f $(OUT)
	@/bin/rm -f $(OUT_B)
	
fclean: clean
	@echo "Cleaning all"
	@/bin/rm -f $(NAME)
	
re: fclean all