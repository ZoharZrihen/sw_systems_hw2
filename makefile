CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BANK=myBank.o
FLAGS= -Wall -g

all: mybanks mybankd mains maind
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyBank.so
mains: $(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a
mybankd: $(OBJECTS_BANK)
	$(CC) -shared -o libmyBank.so $(OBJECTS_BANK)
mybanks: $(OBJECTS_BANK)
	$(AR) -rcs libmyBank.a $(OBJECTS_BANK)
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c -fPIC 
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
