CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= Materia
SRCS	= main.cpp \
			AMateria.cpp \
			Materia.cpp \
			ICharacter.cpp \
			Character.cpp \
			IMateriaSource.cpp \
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