# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 15:14:08 by hbouqssi          #+#    #+#              #
#    Updated: 2022/11/26 18:13:31 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 28B
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
HEADERS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
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