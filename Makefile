# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/29 05:30:32 by marvin            #+#    #+#              #
#    Updated: 2020/02/29 05:43:13 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OUTPUT = *.o
HEADER = ./
FLAG = -Wall -Wextra -Werror

$(NAME) : $(OUTPUT) 
	ar rc $(NAME) $(OUTPUT)

$(OUTPUT) : $(SRC)
	gcc $(FLAG) -c $(SRC) -I $(HEADER)

all : $(NAME)

clean :
	rm -f $(OUTPUT)

fclean : clean
	rm -f $(NAME)

re : fclean all