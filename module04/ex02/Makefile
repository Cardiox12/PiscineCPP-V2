CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -Iincludes -fsanitize=address
NAME	= Animal
FILES	= 	Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			Brain.cpp

SRCS  = $(addprefix src/,$(FILES))
SRCS += main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all