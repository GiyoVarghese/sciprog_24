CC=gcc #C compiler
CCFLAGS=-03 #Optimize for compiler instructions
LDFLAGS=-lm #For linking options

all:mmc # to pull executables

mmc: main.o mm.o
	$(CC) -o mmc main.o mm.o $(LDFLAGS) 
mm.o: mm.c
	$(CC) -c $(CCFLAGS) mm.c
main.o: main.c
	$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o
