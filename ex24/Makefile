CC=cc
CFLAGS= -Wall -Wextra -Werror
TARGET=libft.a
SRC_DIR = srcs
HDR_DIR = includes

SRC_FILES = \
	$(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_swap.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	ar rcs $(TARGET) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c -I$(HDR_DIR) $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)

re: fclean
	$(MAKE) all

.PHONY: clean fclean all re
