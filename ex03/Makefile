SRC = ./src/
INCLUDE = ./include

file = $(addprefix $(SRC), Main.cpp AMateria.cpp Ice.cpp)

NAME = World_on_fire

cc = c++
flag = -Wall -Wextra -Werror -std=c++98 -g
all : $(NAME)

$(NAME) :
			$(cc) $(flag) -I$(INCLUDE) $(file) -o $(NAME)

clean:
			@echo "nothing to clean"
fclean:
			rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
