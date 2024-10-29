# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-oli <gade-oli@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 18:28:42 by gade-oli          #+#    #+#              #
#    Updated: 2024/10/29 18:39:00 by gade-oli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#colors-------------------------------------------------------------------------

RED     = '\033[1;31m'
GREEN   = '\033[1;32m'
BLUE    = '\033[1;34m'
RESET   = '\033[0;0m'

#variables----------------------------------------------------------------------

NAME = minishell

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -lreadline #-fsanitize-address

LIBFT_DIR = megalibft/
LIBFT = $(LIBFT_DIR)megalibft.a

SRC = src/main.c 

BIN = $(SRC:src/%.c=bin/%.o)

#recipes------------------------------------------------------------------------

all: $(NAME)

$(LIBFT):
	@echo $(BLUE)"compiling libft"$(RESET)
	@make --directory=$(LIBFT_DIR) 

bin/%.o: src/%.c
	@echo $(BLUE)"compiling binaries..."$(RESET)
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ $(CFLAGS)

$(NAME): $(LIBFT) $(BIN)
	$(CC) $(BIN) $(LIBFT) -o $@ $(CFLAGS)
	@echo $(GREEN)"$(NAME) compiled!"$(RESET)

clean:
	@make clean --directory=$(LIBFT_DIR) 
	rm -rf $(BIN)
	@echo $(RED)"binaries deleted"$(RESET)

fclean:	clean
	@make fclean --directory=$(LIBFT_DIR) 
	rm -rf $(NAME)
	@echo $(RED)"$(NAME) deleted!"$(RESET)

re:	fclean all

.PHONY: all clean fclean re
