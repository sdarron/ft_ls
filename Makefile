# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 23:19:27 by sdarron           #+#    #+#              #
#    Updated: 2021/02/12 19:45:13 by sdarron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_LS = ft_ls

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB_DIR		=	libft/
LIB_A		=	$(LIB_DIR)libft.a
LIB_HEAD	=	$(LIB_DIR)libft.h
LIB_OBJ		= 	libft/objects/

INC_DIR		= includes/
OBJ_DIR		= objects/
SRC_L_D		= srcs/
SRC_LIB		= libft/

HEAD		= $(INC_DIR)ft_ls.h
INC			= -I$(LIB_DIR) -I$(INC_DIR)

SRC_LIST	= main.c

SRC 		= $(SRC_LIST)
OBJ			= $(SRC_LIST:%.c=%.o)
SRCS		= $(addprefix $(SRC_L_D), $(SRC_LIST))
OS			= $(addprefix $(OBJ_DIR), $(OBJ))

all: $(OBJ_DIR) $(FT_LS)
	@echo "\\033[33m ft_ls project has been compliled successfully!\033[0m"

$(LIB_A):
	@echo "\\033[32m Preparing libft... \033[0m"
	@$(MAKE) -sC $(LIB_DIR) CFLAGS="$(CFLAGS)"
	
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_L_D)%.c $(HEAD) $(LIB_HEAD)
	@$(CC) $(FLAGS) -c $(INC) $< -o $@

$(FT_LS): $(LIB_A) $(OS)
	@echo "\\033[32m Preparing ft_ls... \033[0m"
	@$(CC) $(FLAGS) $(INC) $(OS) $(LIB_A) -o $(FT_LS)

clean:
	@rm -rf $(OBJ_DIR) $(LIB_OBJ)

fclean: clean
	@rm -rf $(FT_LS) $(ASM) $(LIB_A)

re: fclean all

.PHONY: all clean fclean re
