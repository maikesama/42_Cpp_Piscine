NAME = Intern

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Bureaucrat.cpp main.cpp Form.cpp\
	ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp\
	Intern.cpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(OBJS) $(NAME)
	
re : fclean all