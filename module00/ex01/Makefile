CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= phone-book
SRCS	= main.cpp \
			Contact.cpp \
			PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
