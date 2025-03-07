# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 15:51:31 by cmassol           #+#    #+#              #
#    Updated: 2025/03/03 19:49:06 by cmassol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arminishell.a

LIBFT_DIR = libft

SOURCE_DIR = sources

LIBFT = $(LIBFT_DIR)/libftprintfgnl.a

HEADERS = include/minishell.h 

SOURCES = sources/minishell.c \
			sources/factory.c sources/read_line.c sources/printer.c

SOURCE_MAIN = sources/launcher.c

#OBJECTS = $(addprefix $(OBJDIR)/,$(SOURCES:.c=.o))
OBJECTS = $(SOURCES:$(SOURCE_DIR)/%.c=$(OBJDIR)/%.o)

OBJDIR = obj

CC = cc

FLAGS = -Wall -Wextra -Werror -g3

RM = rm -f

AR = ar rcs

PROGRAM = minishell

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

LIBS = -lreadline

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

deldir:
	$(RM) -r $(OBJDIR)

$(LIBFT):
	@echo "$(MAGENTA)MAKE LIBFT FOR : $(DEF_COLOR)"
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJECTS) $(HEADERS) $(LIBFT)
	@echo "              $(YELLOW) **** >>>>> Compiling: $(INFO) <<<<< **** $(DEF_COLOR)"
	$(CC) $(FLAGS) $(SOURCE_MAIN) $(OBJECTS) -Llibft -l:libftprintfgnl.a $(LIBS) -o $(PROGRAM)
	@echo ""
	@echo ""
	@echo "$(GREEN)          () () $(DEF_COLOR)"
	@echo "$(GREEN)          (>.<) $(DEF_COLOR)"
	@echo "$(GREEN)          ( . ) $(DEF_COLOR)"
	@echo "$(GREEN)           n_n  $(DEF_COLOR)"
	@echo "$(MAGENTA)>>>>> $(INFO) compiled!$(DEF_COLOR)"

$(OBJDIR)/%.o: $(SOURCE_DIR)/%.c $(HEADERS)
	@mkdir -p $(dir $@)
	@echo "$(MAGENTA)CREATE OBJECTS FOR : $(DEF_COLOR)"
	$(CC) $(FLAGS) -c -o $@ $<
	
clean: deldir
	@echo "$(MAGENTA)CLEAN OBJECTS FOR :  $(OBJECTS) ! $(DEF_COLOR)"
	$(RM) $(OBJECTS) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) clean
	
fclean: clean
	@echo "$(MAGENTA)FCLEAN NAME FOR :  $(OBJECTS) ! $(DEF_COLOR)"
	$(RM) -r $(OBJDIR)
	$(RM) $(PROGRAM)
	$(MAKE) -C $(LIBFT_DIR) fclean
	
re: fclean all

.PHONY: all clean fclean re