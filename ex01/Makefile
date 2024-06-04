# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 13:44:56 by cjia              #+#    #+#              #
#    Updated: 2024/06/04 12:23:34 by cjia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS) Makefile
	@ g++ $(OBJS) -o $(NAME)
	@ echo "compile done."

clean:
	@ rm -f $(OBJS)
	@ echo "clean done."

fclean:
	@ rm -f $(NAME) $(OBJS)
	@echo "fclean done."

re:		fclean all

.PHONY:		all clean fclean re

