NAME = animals

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp main.cpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(OBJS) $(NAME)
	
re : fclean all