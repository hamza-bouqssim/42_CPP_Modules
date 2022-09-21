NAME = phonebook
CFLAGS = -Wall -Wextra -Werror
CC = c++
RM = rm -rf

SRCS = contact.cpp main.cpp phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp contact.hpp phonebook.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all