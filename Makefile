NAME            =	ft_fprintf
PRINT_PREFIX    =	\033[1m\033[38;5;240m[\033[0m\033[38;5;250m\
                   		 $(NAME)\033[1m\033[38;5;240m] \033[38;5;105m~\033[0m

CC				=	@cc
CFLAGS          =	-Wall -Werror -Wextra -g3

SRC_DIR         =	srces/
OBJ_DIR         =	.obj/

SRC             =	main.c ft_fprintf.c \
					ft_error_varlog.c \
					ft_malloc.c ft_putptr_fd.c ft_putnbr_base_fd.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
					ft_strjoin.c ft_strlen.c ft_strdup.c \
					ft_bzero.c ft_lstadd_back.c ft_lstlast.c

SRCES           =	$(addprefix $(SRC_DIR), $(SRC))
OBJ             =	$(SRC:.c=.o)
OBJS            =	$(addprefix $(OBJ_DIR), $(OBJ))

NUM_FILES		=	$(words $(SRCES))
BAR_LENGTH		=	$(shell echo "$$(($(NUM_FILES)*1))")

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@printf "$(PRINT_PREFIX)\033[0;38;5;226m Compiling \033[0m["
	@for i in $(shell seq 1 $(BAR_LENGTH)); do \
		sleep 0.01; \
		printf "\033[38;5;40m▲▼"; \
	done
	@printf "\033[38;5;40m] \033[0m\n"
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) -lreadline -o $(NAME)
	@echo "$(PRINT_PREFIX)\033[0;32m Done \033[0;37m\n"

clean:
	@echo "$(PRINT_PREFIX)\033[0;38;5;226m Cleaning \033[0m\n"
	@rm -rf $(OBJS)
	@echo "$(PRINT_PREFIX)\033[0;32m Done \033[0;37m\n"

fclean: clean
	@rm -rf $(NAME) $(OBJ_DIR)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run
