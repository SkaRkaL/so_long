# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 00:18:14 by sakarkal          #+#    #+#              #
#    Updated: 2023/06/08 00:00:37 by sakarkal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS =  -Wall -Wextra  -Werror


SRC = check_map.c \
		distroy_img.c \
		drawing.c \
		find.c \
		finish_game.c \
		mapping_util.c \
		load_img.c \
		mapping.c \
		moves.c \
		printer.c \
		putnbr.c \
		map_checker.c \
		so_long.c \
		split.c \
		struct_intia.c \
		substr.c \
		utils.c \
		valid_path.c \
		directions.c \
		window.c 


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	
	
%.o: %.c so_long.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME) 

re : fclean all
