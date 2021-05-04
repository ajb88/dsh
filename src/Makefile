DEPS = character.h
OBJ = character.o utest.o
CC = g++
CFLAGS = -g -Wall

default: utest

%.o: %.c $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

utest: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	-rm -f $(OBJ)
	-rm -f utest
