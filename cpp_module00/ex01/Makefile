NAME = phonebook

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp\
		Contact.cpp\
		PhoneBook.cpp

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all