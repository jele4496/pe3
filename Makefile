CC = g++
CFLAGS = -std=c++11 -Wall
OBJS = pe3_references.o test.o

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o test

pe3_references.o: pe3_references.cpp pe3_references.h
	$(CC) $(CFLAGS) -c pe3_references.cpp

test.o: test.cpp pe3_references.h
	$(CC) $(CFLAGS) -c test.cpp

clean:
	rm -f test $(OBJS)
