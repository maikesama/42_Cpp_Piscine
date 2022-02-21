NAME = war

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = HumanA.cpp\
		Weapon.cpp\
		main.cpp\
		HumanB.cpp

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)
	
re : clean all