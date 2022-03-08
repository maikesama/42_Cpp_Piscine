NAME = Alchemist

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(OBJS) $(NAME)
	
re : fclean all
