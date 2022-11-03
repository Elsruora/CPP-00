# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 14:39:03 by nchabli           #+#    #+#              #
#    Updated: 2022/10/08 14:43:46 by nchabli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    megaphone

SRCS    =    megaphone.cpp

CC        =    c++

CFLAGS    =    -Wall -Wextra -Werror

STD98    =    -std=c++98

OBJS    =    $(SRCS:.cpp=.o)

%.o:        %.cpp
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