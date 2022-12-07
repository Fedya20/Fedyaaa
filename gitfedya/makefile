FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re

#PHONY sert a montrer a makefille que ce ne sont pas des fichiers.#
# $@ veut dire la target du fichier ou on l ecrit par exemple dans %.o le $@ veut dire "%.o"#
# @"fonction" dit a makefille de faire cette fonction dans le terminal#
# $< veut dire la premiere prerequisition dans le "%.o: %.c" il veut dire le %.c#
# Wildcard veut dire une liste de noms de fichiers existants, séparés par des espaces, qui correspondent à l'un des modèles de noms de fichiers donnés#
