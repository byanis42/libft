NAME = libft.a

BONUS_NAME = libft_bonus.a

SRCS = ft_atoi.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isalnum.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strchr.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_strlcpy.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strnstr.c \

BONUS_SRCS	=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstclear.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c \

FLAGS = -Wall -Wextra -Werror -g3

all: ${NAME}

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME) $(SRCS:.c=.o) $^
	ranlib $(NAME)

bonus: 
	gcc $(FLAGS) -c $(SRCS) $(BONUS_SRCS) -I .
	ar rc $(NAME) $(BONUS_SRCS:.c=.o) $(SRCS:.c=.o) $^
	ranlib $(NAME)

clean:
	del -rf $(SRCS:.c=.o)

clean_bonus:
	del -rf $(BONUS_SRCS:.c=.o)

fclean:	clean clean_bonus
	del -rf $(NAME)

re:	fclean all

.PHONY:	all clean clean_bonus fclean re