CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= weapon
SRCS	= main.cpp \
		  HumanA.cpp \
		  HumanB.cpp \
		  Weapon.cpp
		  

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
