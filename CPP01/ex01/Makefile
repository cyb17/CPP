# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachen <yachen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 14:21:49 by yachen            #+#    #+#              #
#    Updated: 2024/02/05 11:44:53 by yachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoreBraiiiiiiinnnzzzZ

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\e[32m\n==================================="
		@echo "\e[32mCompiling MoreBraiiiiiiinnnzzzZ----------------"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\e[32m---created with success : MoreBraiiiiiiinnnzzzZ"
		@echo "\e[32m===================================\n\e[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning MoreBraiiiiiiinnnzzzZ----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----MoreBraiiiiiiinnnzzzZ Cleaned"
	@echo "\e[32m=====================\n\e[0m"

fclean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning MoreBraiiiiiiinnnzzzZ----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----MoreBraiiiiiiinnnzzzZ Cleaned"
	@rm -rf $(NAME)
	@echo "\e[32m=====================\n\e[0m"

re: fclean all

.PHONY: clean fclean all re bonus
