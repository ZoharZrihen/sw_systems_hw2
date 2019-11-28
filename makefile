CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BANK=myBank.o
FLAGS= -Wall -g

all: mybanks mains
mains: $(OBJECTS_MAIN) mybanks
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a
mybanks: libmyBank.a
libmyBank.a: $(OBJECTS_BANK)
	$(AR) -rcs libmyBank.a $(OBJECTS_BANK)
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all mybanks

clean:
	rm -f *.o *.a *.so mains
