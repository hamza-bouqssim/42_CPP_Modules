# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 22:22:48 by hbouqssi          #+#    #+#              #
#    Updated: 2022/12/04 00:25:29 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
		@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all