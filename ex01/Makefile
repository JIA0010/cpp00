NAME = phonebook
SRCS = main.cpp Contact.cpp PhoneBook.cpp
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

