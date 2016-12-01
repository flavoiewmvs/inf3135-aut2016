EXEC = hello
CFLAGS = `pkg-config --cflags cairo`
LFLAGS = `pkg-config --libs cairo` 

$(EXEC): $(EXEC).o
	gcc -o $@ $(LFLAGS) $<

$(EXEC).o: $(EXEC).c
	gcc -o $@ $(CFLAGS) -c $<
