CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -fsanitize=address
NAME	= Materia
SRCS	= main.cpp \
			AMateria.cpp \
			Character.cpp \
			MateriaSource.cpp \
			Ice.cpp \
			Cure.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all