NAME = DiamondTrap

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(OBJS) $(NAME)
	
re : fclean all
