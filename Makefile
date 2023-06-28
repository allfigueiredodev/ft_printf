NAME = libftprintf.a
AR = ar rcs
RL = ranlib
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_utils.c\

all: $(NAME)
	# $(CC) $(SRC) $(FLAGS) -g3 && ./a.out 

OBJS = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I ./

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RL) $(NAME)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re