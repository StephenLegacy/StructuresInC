CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c funct.c
OBJ = $(SRC:.c=.o)
EXEC = sneakers

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

main.o: main.c funct.h  # Added function.h as a dependency
	$(CC) $(CFLAGS) -c main.c

funct.o: funct.c funct.h
	$(CC) $(CFLAGS) -c funct.c

clean:
	rm -f $(OBJ) $(EXEC)

