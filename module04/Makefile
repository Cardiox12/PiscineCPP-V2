CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= Animal
SRCS	= main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all