NAME = megaphone
SRCS = megaphone.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS) Makefile
	@ c++ $(FLAGS) $(OBJS) -o $(NAME)
	@ echo "compile done."

clean:
	@ rm -f $(OBJS)
	@ echo "clean done."

fclean:
	@ rm -f $(NAME) $(OBJS)
	@echo "fclean done."

re:		fclean all

.PHONY:		all clean fclean re

