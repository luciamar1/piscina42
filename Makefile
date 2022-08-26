NAME = libft.a

SRC = ft_bzero.c  ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlcpy.c \
 ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strlen.c \
 ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
 ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew_bonus.c  ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
 ft_lstlast_bonus.c   ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c  ft_lstmap_bonus.c ft_lstadd_back_bonus.c 
 
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = /bin/rm -f
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

$(NAME): $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean clbonus
	$(RM) $(NAME)
re: fclean all
clbonus: 
	$(RM) $(OBJ) $(BONUS_OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	gcc -c $(FLAGS) $(SRC)
	ar rcs  $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: all clean re 
















