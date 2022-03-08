NAME = Span

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Span.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(OBJS) $(NAME)

re : fclean all