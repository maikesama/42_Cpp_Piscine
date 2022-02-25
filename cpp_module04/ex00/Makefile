NAME = animals

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp main.cpp\

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	
all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all