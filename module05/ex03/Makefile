CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
NAME	= Forms
SRCS	=	main.cpp \
			Form.cpp \
			Bureaucrat.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			Intern.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all