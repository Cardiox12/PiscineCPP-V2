CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= Form
SRCS	=	main.cpp \
			Form.cpp \
			Bureaucrat.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all