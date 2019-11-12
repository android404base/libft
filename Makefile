# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydag <ydag@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 16:41:38 by ydag           #+#    #+#                 #
#    Updated: 2019/11/11 18:28:33 by ydag          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c ft_build.c ft_bzero.c \
			ft_calloc.c ft_findword.c ft_free_all.c \
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
			ft_wordsizes.c ft_wrdcntr.c

SRCS_BNS =  ft_atoi.c ft_build.c ft_bzero.c \
			ft_calloc.c ft_findword.c ft_free_all.c \
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
			ft_wordsizes.c ft_wrdcntr.c \
			ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 
			
OUT =		ft_atoi.o ft_build.o ft_bzero.o \
			ft_calloc.o ft_findword.o ft_free_all.o \
			ft_isalnum.o ft_isalpha.o ft_isascii.o \
			ft_isdigit.o ft_islower.o ft_isprint.o \
			ft_isspace.o ft_isupper.o ft_itoa.o \
			ft_memccpy.o ft_memchr.o ft_memcmp.o \
			ft_memcpy.o ft_memmove.o ft_memset.o \
			ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
			ft_putstr_fd.o ft_split.o ft_strchr.o \
			ft_strcmp.o ft_strcpy.o ft_strdup.o \
			ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
			ft_strlen.o ft_strmapi.o ft_strncmp.o \
			ft_strnstr.o ft_strrchr.o ft_strtrim.o \
			ft_substr.o ft_tolower.o ft_toupper.o \
			ft_wordsizes.o ft_wrdcntr.o

OUT_B =     ft_atoi.o ft_build.o ft_bzero.o \
			ft_calloc.o ft_findword.o ft_free_all.o \
			ft_isalnum.o ft_isalpha.o ft_isascii.o \
			ft_isdigit.o ft_islower.o ft_isprint.o \
			ft_isspace.o ft_isupper.o ft_itoa.o \
			ft_memccpy.o ft_memchr.o ft_memcmp.o \
			ft_memcpy.o ft_memmove.o ft_memset.o \
			ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
			ft_putstr_fd.o ft_split.o ft_strchr.o \
			ft_strcmp.o ft_strcpy.o ft_strdup.o \
			ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
			ft_strlen.o ft_strmapi.o ft_strncmp.o \
			ft_strnstr.o ft_strrchr.o ft_strtrim.o \
			ft_substr.o ft_tolower.o ft_toupper.o \
			ft_wordsizes.o ft_wrdcntr.o \
			ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o \
			ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o \
			ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o

INCLUDES =	includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

bonus : fclean reborn

reborn :
	gcc -Wall -Wextra -Werror -c $(SRCS_BNS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all