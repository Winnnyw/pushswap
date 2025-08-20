#======================= VARIABLES =======================
NAME = push_swap

LIBFT_DIR = libft
LIBFT = libft.a

#Tous tes fichiers .c
SRC  = push_swap.c \
		parsing.c \
		sort.c \
		mouvements/op_push.c \
		mouvements/op_reverse.c \
		mouvements/op_rotate.c \
		mouvements/op_swap.c \

#Convertit automatiquement chaque .c → .o
OBJ  = $(SRC:.c=.o)

#Options de compilation
CFLAGS = -Wall -Wextra -Werror -I./libft -I. -g

# ======================= RÈGLES ==========================
#Règle par défaut : taper simplement "make" lancera "all"
all: $(NAME)

#Comment fabriquer libft.a ?
$(NAME): $(LIBFT) $(OBJ)
	cc $(OBJ) $(LIBFT_DIR)/$(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

#Comment fabriquer un .o depuis un .c ?
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

#Nettoyer les .o
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

#Nettoyer .o + lib
fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

#Recompiler proprement
re: fclean all

#Déclare ces noms comme « pas de vrais fichiers »
.PHONY: all clean fclean re