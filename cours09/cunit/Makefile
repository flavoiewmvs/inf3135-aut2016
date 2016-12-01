CC = gcc
CFLAGS = -I/opt/local/include -Wall
LFLAGS = -L/opt/local/lib -lcunit
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(wildcard *.c))
EXEC = test_treemap

$(EXEC): $(OBJ)
	$(CC) $(LFLAGS) -o $(EXEC) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean test

clean:
	rm -f $(OBJ) $(EXEC)

test: $(EXEC)
	./$(EXEC)
