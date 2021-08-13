CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= bank
SRCS	= tests.cpp \
			Account.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
