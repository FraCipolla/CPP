NAME = animal
SRC = Cat.cpp Dog.cpp Animal.cpp main.cpp
FLAG = -Wall -Werror -Wextra -std=c++98

$(NAME):
	g++ $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re:	fclean all