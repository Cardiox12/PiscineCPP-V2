CC		= c++
CFLAGS	= -g -Wall -Werror -Wextra -std=c++98
NAME	= fixed 
SRCS	= main.cpp \
		  Fixed.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
