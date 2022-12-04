# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 17:27:55 by hbouqssi          #+#    #+#              #
#    Updated: 2022/12/04 18:24:29 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RealType
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = main.cpp Base.cpp
HEADERS = Base.hpp A.hpp B.hpp C.hpp
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