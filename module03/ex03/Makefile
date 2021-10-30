CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
NAME	= Diamond
SRCS	= main.cpp \
			DiamondTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			ClapTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all