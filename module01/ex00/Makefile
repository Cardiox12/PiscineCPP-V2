CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= zombie 
SRCS	= main.cpp \
	  Zombie.cpp \
	  randomChump.cpp \
	  newZombie.cpp
	

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
