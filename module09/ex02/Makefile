NAME = PmergeMe
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = main.cpp PmergeMe.cpp
HEADERS = PmergeMe.hpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADERS)
		@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all