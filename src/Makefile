DEPS = character.h race.h job.h
OBJ = character.o utest.o job.o race.o
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
