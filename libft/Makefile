NAME = libftprintfgnl.a

HEADERS = libft.h ft_printf.h get_next_line.h

SOURCES_LIBFT = sources_libft/ft_strlen.c sources_libft/ft_atoi.c sources_libft/ft_itoa.c sources_libft/ft_isdigit.c \
                sources_libft/ft_free.c sources_libft/ft_split.c sources_libft/ft_strcmp.c sources_libft/ft_strdup.c \
                sources_libft/ft_strlcpy.c sources_libft/ft_substr.c sources_libft/ft_nb_words.c sources_libft/ft_atol.c \
                sources_libft/ft_isstrnum.c sources_gnl/get_next_line.c sources_libft/ft_strjoin.c sources_libft/ft_strrchr.c \
				sources_libft/ft_strchr.c sources_libft/ft_strlcat.c sources_libft/ft_strncmp.c sources_libft/ft_strnstr.c \
				sources_libft/ft_strtrim.c sources_libft/ft_calloc.c sources_libft/ft_memset.c sources_libft/ft_bzero.c \
				sources_libft/ft_memcpy.c sources_libft/ft_memmove.c sources_libft/ft_memchr.c \
				sources_libft/ft_memcmp.c \
				sources_libft/ft_strncmp.c \
				sources_libft/ft_striteri.c sources_libft/ft_strmapi.c \
				sources_libft/ft_strjoin.c \
				sources_libft/ft_strtrim.c sources_libft/ft_itoa.c sources_libft/ft_putchar.c sources_libft/ft_putstr.c \
				sources_libft/ft_putnbr.c  \
				sources_libft/ft_lstadd_back_bonus.c sources_libft/ft_lstadd_front_bonus.c sources_libft/ft_lstclear_bonus.c \
				sources_libft/ft_lstdelone_bonus.c sources_libft/ft_lstiter_bonus.c sources_libft/ft_lstlast_bonus.c \
				sources_libft/ft_lstnew_bonus.c sources_libft/ft_lstsize_bonus.c sources_libft/ft_lstmap_bonus.c 

SOURCES_PRINTF = sources_ft_printf/ft_printf.c sources_ft_printf/ft_putcharlen.c sources_ft_printf/ft_putnbrhexlen.c \
                 sources_ft_printf/ft_putnbrlen.c sources_ft_printf/ft_putptrlen.c sources_ft_printf/ft_putstrlen.c

OBJECTS = $(SOURCES_LIBFT:.c=.o) $(SOURCES_PRINTF:.c=.o)

CFLAGS = -Werror -Wall -Wextra -g3

CC = cc

AR = ar rcs

RM = rm -f

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@echo "              $(YELLOW) **** >>>>> Compiling: $(INFO) <<<<< **** $(DEF_COLOR)"
	$(AR) $@ $^
	@echo ""
	@echo ""
	@echo "$(MAGENTA)>>>>> $(INFO) compiled!$(DEF_COLOR)"

clean:
	$(RM) $(OBJECTS)
	@echo "$(MAGENTA)CLEAN OBJECTS FOR :  $(OBJECTS) ! $(DEF_COLOR)"
	
fclean: clean
	$(RM) $(NAME)
	@echo "$(MAGENTA)CLEAN NAME FOR :  $(OBJECTS) ! $(DEF_COLOR)"

re: fclean all

.PHONY: clean fclean all re bonus test_bonus
