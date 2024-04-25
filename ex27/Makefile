CC=cc
CFLAGS= -Wall -Wextra -Werror
TARGET=ft_display_file

SRC_FILES = \
	ft_display_file.c


OBJ_FILES = $(SRC_FILES:.c=.o)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@  $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)

.PHONY: clean fclean all
