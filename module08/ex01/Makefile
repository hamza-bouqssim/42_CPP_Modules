# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 11:11:55 by hbouqssi          #+#    #+#              #
#    Updated: 2022/12/10 21:13:09 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = main.cpp Span.cpp
HEADERS = Span.hpp
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