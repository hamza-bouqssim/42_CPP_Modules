# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 01:51:51 by hbouqssi          #+#    #+#              #
#    Updated: 2022/12/06 01:51:52 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = main.cpp
HEADERS = Array.hpp
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