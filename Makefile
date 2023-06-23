NAME = libftprintf.a
AR = ar rcs
RL = ranlib
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c \

OBJS = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I ./

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RL) $(NAME)

all: $(NAME)
	$(CC) $(SRC) $(FLAGS) -g3 && ./a.out 
clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re