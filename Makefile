# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 06:54:23 by tedcarpi          #+#    #+#              #
#    Updated: 2025/04/30 06:54:49 by tedcarpi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
OBJ_DIR = obj
INC_DIR = includes

SRC = main.c \
      operations/push.c \
      operations/rotate.c \
      operations/reverse_rotate.c \
      operations/swap.c \
      sort/small_sort.c \
      sort/big_sort.c \
      sort/sort_utils.c \
      utils/parse_args.c \
      utils/stack_utils.c \
      utils/error_handling.c \
      utils/utils.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC_DIR) -Ilibft -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)/operations
	@mkdir -p $(OBJ_DIR)/sort
	@mkdir -p $(OBJ_DIR)/utils

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re