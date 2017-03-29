main: main.o hoho.o
	g++ -o main main.o hoho.o
main.o: main.cpp
	g++ -c main.cpp
hoho.o: hoho.h hoho.cpp
	g++ -c hoho.cpp
