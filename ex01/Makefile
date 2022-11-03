# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 14:39:03 by nchabli           #+#    #+#              #
#    Updated: 2022/11/03 22:47:42 by nchabli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

HEADERS    =    includes/PhoneBook.hpp includes/Contact.hpp

SRCS    =    srcs/class/PhoneBook.cpp srcs/class/Contact.cpp \
            srcs/main.cpp

CC        =    c++

CFLAGS    =    -Wall -Wextra -Werror -fsanitize=address

STD98    =    -std=c++98

OBJS    =    $(SRCS:.cpp=.o)

%.o:		%.cpp $(HEADERS)
			$(CC) $(CFLAGS) $(STD98) -c $< -o $@

all:        $(NAME)

$(NAME):    $(OBJS)
			$(CC) $(CFLAGS) $(STD98) $(OBJS) -o $(NAME) 

clean:
			rm -f $(OBJS)

fclean:        clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re