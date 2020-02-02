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

CHECKER = checker
PUSH_SWAP = push_swap

CC =  gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 	dfs.c \
		dfs_tool.c \
		ft_array_to_lstd.c \
		ft_checker_tools.c \
		ft_is_array_in_lstd.c \
		ft_lstd_deep_del.c \
		ft_lstd_swap.c \
		ft_lstd_to_array.c \
		ft_lstprint.c \
		ft_operation2.c \
		ft_operation.c \
		ft_output.c \
		ft_ps_new_content.c \
		ft_queue_sort.c \
		ft_quick_sort.c \
		ft_sort_ratio.c \
		ft_sort_tools2.c \
		ft_sort_tools3.c \
		ft_sort_tools4.c \
		ft_sort_tools.c \
		ft_strsplit_to_inttab.c \
		is_sorted.c \
		read.c
#		checker.c \
#		push_swap.c

SRCDIR = src
OBJDIR = obj
LIBDIR = lib/libft
LIB = libft.a

OBJ =$(addprefix $(OBJDIR)/, $(SRC:.c=.o))

HEADERS = -Ilib/libft/includes -Iincludes
HEADER = includes/push_swap.h

.PHONY: all clean fclean re help

PROGRAMS = $(PUSH_SWAP) $(CHECKER)

all: $(PROGRAMS)

help:
	@echo "Usage :"
	@echo "\tmake //create push_swap && checker"
	@echo "\tmake push_swap //create push_swap"
	@echo "\tmake checker //create checker"
	@echo "\tmake clean // remove *.o files"
	@echo "\tmake flean //remove *.o and binary files"
	@echo "\tmake re // recreate binary files"

clean:
	rm -rf $(OBJDIR)
	@make clean -C $(LIBDIR)

fclean: clean
	rm -f $(CHECKER)
	rm -f $(PUSH_SWAP)
	@make fclean -C $(LIBDIR)

re: fclean all

$(CHECKER): $(OBJDIR) $(OBJ) $(LIBDIR)/$(LIB) $(OBJDIR)/checker.o
	$(CC) $(OBJ) $(OBJDIR)/checker.o -L$(LIBDIR) -lft $(HEADERS) -o $(CHECKER)

$(PUSH_SWAP): $(OBJDIR) $(OBJ) $(HEADER) $(LIBDIR)/$(LIB) $(OBJDIR)/push_swap.o
	$(CC) $(OBJ) $(OBJDIR)/push_swap.o -L$(LIBDIR) -lft $(HEADERS) -o $(PUSH_SWAP)

$(LIBDIR)/$(LIB):
	make -C $(LIBDIR)
	@make clean -C $(LIBDIR)

$(OBJ): $(OBJDIR)/%o: $(SRCDIR)/%c  $(HEADER)
	$(CC) $(CFLAGS) $(HEADERS) -o $@ -c $<
	$(CC) $(CFLAGS) $(HEADERS) -o $(OBJDIR)/checker.o -c $(SRCDIR)/checker.c
	$(CC) $(CFLAGS) $(HEADERS) -o $(OBJDIR)/push_swap.o -c $(SRCDIR)/push_swap.c

$(OBJDIR):
	mkdir -p $(OBJDIR)