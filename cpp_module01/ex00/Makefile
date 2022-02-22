NAME = zombie

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp\
		newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all