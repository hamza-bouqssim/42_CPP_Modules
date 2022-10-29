# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 21:37:45 by hbouqssi          #+#    #+#              #
#    Updated: 2022/10/29 01:29:43 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Harl.hpp
		@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all