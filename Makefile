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

NAME1 = checker
NAME2 = push_swap

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
		read.c \
		checker.c \
		push_swap.c

SRCDIR = src
OBJDIR = obj
LIBDIR = lib/libft
LIB = libft.a

OBJ =$(addprefix $(OBJDIR)/, $(SRC:.c=.o))

HEADERS = -Ilib/libft/includes -Iincludes
#HEADER = includes/push_swap.h

.PHONY: all clean fclean re help

all: $(NAME1) $(NAME2)

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
	rm -f $(NAME1)
	rm -f $(NAME2)
	@make fclean -C $(LIBDIR)

re: fclean all

$(NAME1): $(OBJDIR) $(OBJ) $(HEADER) $(LIBDIR)/$(LIB) $(SRCDIR)/checker.c
	$(CC) $($(OBJ) - obj/checker.o) -L$(LIBDIR) -lft $(HEADERS) -o $(NAME1)


$(NAME2): $(OBJDIR) $(OBJ) $(HEADER) $(LIBDIR)/$(LIB) $(SRCDIR)/push_swap.c
	$(CC) $($(OBJ) - obj/push_swap.o) -L$(LIBDIR) -lft $(HEADERS) -o $(NAME2)

$(LIBDIR)/$(LIB):
	make -C $(LIBDIR)
	@make clean -C $(LIBDIR)

$(OBJ):$(OBJDIR)/%o:$(SRCDIR)/%c
	$(CC) $(CFLAGS) $(HEADERS) -o $@ -c $<

$(OBJDIR):
	mkdir -p $(OBJDIR)
