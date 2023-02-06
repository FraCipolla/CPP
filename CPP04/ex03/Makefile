NAME	=	materia
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC		=	AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			main.cpp \
			MateriaSource.cpp
OBJ		=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re