TARGET		=	$(BIN_DIR)/libft.a
COMPILER	=	gcc
CFLAGS 		=	-Werror -Wextra -Wall -g

BUILD_DIR 	=	../../build/libft
BIN_DIR		=	../../bin/archives

RED			=	\033[91m
GRN			=	\033[92m
YLW			=	\033[93m
BLUE		=	\033[94m
LPPL		=	\033[35m
PPL			=	\033[95m
CYAN		=	\033[96m
CRESET		=	\033[0m

ERS_STR		=	\033[2K\r

LIBC		=	ft_isalpha.c ft_isprint.c ft_strlen.c ft_bzero.c				\
				ft_isascii.c ft_memcpy.c ft_isalnum.c ft_isdigit.c				\
				ft_memset.c ft_memmove.c ft_strlcpy.c ft_strlcat.c				\
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c				\
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c		\
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c	\
				ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c	\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_arraydup.c		\
				ft_datola.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c			\
				ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c ft_strcpy.c ft_isnum.c ft_atol.c				\
				ft_putdarray.c ft_putlarray.c ft_datoia.c ft_strstr.c			\
				ft_darraylen.c ft_strcat.c ft_strjoining.c get_next_line.c		\
				get_next_line_utils.c ft_printf_putchar.c ft_printf_puthexa.c	\
				ft_printf_putnumber.c ft_printf_putpointer.c					\
				ft_printf_putstring.c ft_printf_putunsigned.c ft_printf.c		\
				ft_printf_puterror.c ft_printf_putdarray.c ft_addtoda.c			\
				ft_freedarray.c ft_strncmpcat.c ft_strndup.c ft_rmchars.c		\
				ft_str_replace.c



OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(LIBC))

all: $(TARGET)

stealth: all clean

$(TARGET):	$(OBJS)
	@mkdir -p $(BIN_DIR)
	@ar rcs $(TARGET) $(OBJS)
	@printf "$(ERS_STR)$(GRN)Info : Compilation de la libft réussie !\n$(CRESET)"

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(BUILD_DIR)
	@$(COMPILER) $(CFLAGS) -c $< -o $@
	@printf "$(ERS_STR)$(CYAN)\tLibft: Compiling: $(LPPL)\"%s\"$(CYAN)..." $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

stealth_re: fclean all
	@rm -f $(OBJS)

re: fclean all

.PHONY: stealth all clean fclean stealth_re re
