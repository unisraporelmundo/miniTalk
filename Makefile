CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CLIENT_SRCS = client.c
SERVER_SRCS = server.c
LIBFT_PATH = Libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a
FT_PRINTF_PATH = PrintF
FT_PRINTF_ARCHIVE = $(FT_PRINTF_PATH)/libftprintf.a
CLIENT_NAME = client
SERVER_NAME = server
all: $(LIBFT_ARCHIVE) $(FT_PRINTF_ARCHIVE) $(CLIENT_NAME) $(SERVER_NAME)
$(CLIENT_NAME): $(CLIENT_SRCS)
	$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS) -L$(LIBFT_PATH) -lft -L$(FT_PRINTF_PATH) -lftprintf
$(SERVER_NAME): $(SERVER_SRCS)
	$(CC) $(CFLAGS) -o $@ $(SERVER_SRCS) -L$(LIBFT_PATH) -lft -L$(FT_PRINTF_PATH) -lftprintf
$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)
$(FT_PRINTF_ARCHIVE):
	$(MAKE) -C $(FT_PRINTF_PATH)
clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(MAKE) -C $(FT_PRINTF_PATH) clean
fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(MAKE) -C $(FT_PRINTF_PATH) fclean
	$(RM) $(CLIENT_NAME) $(SERVER_NAME)
re: fclean all
.PHONY: all clean fclean re