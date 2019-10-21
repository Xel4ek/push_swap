# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 14:55:04 by hwolf             #+#    #+#              #
#    Updated: 2019/10/19 19:48:13 by hwolf            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC =  gcc
CFLAGS = #-Wall -Wextra -Werror

SRC = ft_lstprint.c read.c\
		../main.c

SRCDIR = src
OBJDIR = obj
LIBDIR = lib/libft
LIB = libft.a

OBJ =$(addprefix $(OBJDIR)/, $(SRC:.c=.o))

HEADERS = -Ilib/libft/includes -Iincludes
HEADER = includes/push_swap.h

.PHONY: all clean fclean re help

all: $(NAME)

help:
	@echo "Usage :"
	@echo "\tmake //create binary"
	@echo "\tmake clean // remove *.o files"
	@echo "\tmake flean //remove *.o files and binary"
	@echo "\tmake re // redo binary"

clean:
	rm -rf $(OBJDIR)
	@make clean -C $(LIBDIR)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBDIR)

re: fclean all

$(NAME): $(OBJDIR) $(OBJ) $(HEADER) $(LIBDIR)/$(LIB)
	$(CC) $(OBJ) -L$(LIBDIR) -lft $(HEADERS) -o $(NAME)


$(LIBDIR)/$(LIB):
	make -C $(LIBDIR)
	@make clean -C $(LIBDIR)

$(OBJ):$(OBJDIR)/%o:$(SRCDIR)/%c
	$(CC) $(CFLAGS) $(HEADERS) -o $@ -c $<

$(OBJDIR):
	mkdir -p $(OBJDIR)
