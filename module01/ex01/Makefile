CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= zombie-horde 
SRCS	= main.cpp \
	  Zombie.cpp \
	  ZombieHorde.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
