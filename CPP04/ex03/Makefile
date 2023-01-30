NAME = materia
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
FLAG = -Wall -Werror -Wextra -std=c++98

$(NAME):
	g++ $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re:	fclean all