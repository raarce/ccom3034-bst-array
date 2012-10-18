DEP = BinaryTree.h BinaryTree.cpp
CC  = g++

all: btclient

btclient: main.o
	$(CC) -o btclient main.o 

main.o: main.cpp $(DEP)
	$(CC) -c main.cpp

pack: 
	tar cvzf BT-array.tgz *.cpp *.h Makefile
