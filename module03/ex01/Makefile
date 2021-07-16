CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= FragTrap
SRCS	= main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp 

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all