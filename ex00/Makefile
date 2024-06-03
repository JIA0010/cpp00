NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS) Makefile
	@ c++ $(OBJS) -std=c++98 -o $(NAME)
	@ echo "compile done."

clean:
	@ rm -f $(OBJS)
	@ echo "clean done."

fclean:
	@ rm -f $(NAME) $(OBJS)
	@echo "fclean done."

re:		fclean all

.PHONY:		all clean fclean re

