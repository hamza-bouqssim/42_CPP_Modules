# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 15:48:00 by hbouqssi          #+#    #+#              #
#    Updated: 2023/04/11 15:48:01 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = main.cpp BitcoinExchange.cpp
HEADERS = BitcoinExchange.hpp
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