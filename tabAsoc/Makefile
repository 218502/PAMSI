CPPFLAGS= -c -g -Iinc


prog: obj/main.o obj/hashtab.o obj/hashentry.o obj/lista.o obj/asoctab.o obj/stoper.o
	g++ -o prog obj/main.o obj/hashtab.o obj/hashentry.o obj/lista.o obj/asoctab.o obj/stoper.o

obj/main.o: src/main.cpp 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/lista.o: src/lista.cpp inc/lista.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/lista.o src/lista.cpp

obj/hashentry.o: src/hashentry.cpp inc/hashentry.hh
	g++ ${CPPFLAGS} -o obj/hashentry.o src/hashentry.cpp

obj/hashtab.o: src/hashtab.cpp inc/hashtab.hh inc/hashentry.hh
	g++ ${CPPFLAGS} -o obj/hashtab.o src/hashtab.cpp

obj/asoctab.o: src/asoctab.cpp inc/asoctab.hh inc/hashtab.hh inc/hashentry.hh
	g++ ${CPPFLAGS} -o obj/asoctab.o src/asoctab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o prog

