EXEC = hello
COLOR = color
CFLAGS = `pkg-config --cflags cairo`
LFLAGS = `pkg-config --libs cairo` 

all: $(EXEC).o $(COLOR).o $(EXEC)

$(EXEC): $(EXEC).o
	gcc -o $@ $< $(COLOR).o $(LFLAGS)  

$(EXEC).o: $(EXEC).c
	gcc -o $@ $(CFLAGS) -c $<

$(COLOR): $(COLOR).o
	gcc -o $@ $(LFLAGS) $<

$(COLOR).o: $(COLOR).c
	gcc -o $@ $(CFLAGS) -c $<
