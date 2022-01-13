# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 18:13:31 by eros-gir          #+#    #+#              #
#    Updated: 2021/12/19 18:19:11 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c input.c interpretar.c insert_dict.c dict_struct.c read_dict.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
