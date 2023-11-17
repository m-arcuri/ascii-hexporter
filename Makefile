CFLAGS = -Wall -Wextra
VPATH = src
CC = gcc


hexporter : hexporter.c
	$(CC) $? $(CFLAGS) -o $@


.PHONY = clean
clean :
	rm hexporter
