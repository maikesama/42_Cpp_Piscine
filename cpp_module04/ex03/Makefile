NAME = Alchemist

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp\

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all
