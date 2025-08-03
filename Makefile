SRCS = ./ft_isalpha.c \
	./ft_isdigit.c \

INC = ./libft.h

OBJS = $(SRC:.c=.o)

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all