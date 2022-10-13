# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 20:19:16 by hbouqssi          #+#    #+#              #
#    Updated: 2022/10/06 22:48:04 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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