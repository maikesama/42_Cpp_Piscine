NAME = bankData

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp\
		tests.cpp

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all