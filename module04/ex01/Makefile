# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 16:14:50 by hbouqssi          #+#    #+#              #
#    Updated: 2022/11/16 16:16:39 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp
OBJS = $(SRCS:.cpp=.o)


$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o:%.cpp $(HEADERS)
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all