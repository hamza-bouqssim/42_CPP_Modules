# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 15:14:08 by hbouqssi          #+#    #+#              #
#    Updated: 2022/11/19 15:15:31 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp Bureaucrat.cpp
HEADERS = Bureaucrat.hpp
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