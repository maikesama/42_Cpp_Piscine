NAME = iter

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

SRCS = main.cpp

$(NAME) : 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all