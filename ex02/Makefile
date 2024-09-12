SRC = ./src/
INCLUDE = ./include

file = $(addprefix $(SRC), main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp)

NAME = Abstract

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
