CPPFLAGS= -c -g -Iinc


prog: obj/main.o obj/tab1d.o obj/stoper.o
	g++ -o prog obj/main.o obj/tab1d.o obj/stoper.o

obj/main.o: src/main.cpp 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/tab1d.o: src/tab1d.cpp inc/tab1d.hh
	g++ ${CPPFLAGS} -o obj/tab1d.o src/tab1d.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o prog

