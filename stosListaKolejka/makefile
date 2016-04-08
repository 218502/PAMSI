program: main.o kolejka.o lista.o stos.o stoper.o
	g++ main.o kolejka.o stos.o lista.o stoper.o -o program
main.o: main.cpp
	g++ main.cpp -c
kolejka.o: kolejka.cpp kolejka.hh
	g++ kolejka.cpp -c
lista.o: lista.cpp lista.hh node.hh
	g++ lista.cpp -c
stos.o: stos.cpp stos.hh
	g++ stos.cpp -c
stoper.o: stoper.cpp stoper.hh
	g++ stoper.cpp -c
