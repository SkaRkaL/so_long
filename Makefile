NAME = so_long

CC = cc

CFLAGS =  -Wall -Wextra  -Werror


SRC = so_long.c check_map.c \
		find.c \
		get_position.c \
		mapping.c \
		printer.c \
		split.c \
		struct_intia.c \
		substr.c \
		textures \
		utils.c \
		valid_path.c 


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	
	
%.o: %.c so_long.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME) 

re : fclean all
