CCFLAGS= -Iinc -std=c++11 -g

start: bb
	./bb

bb:   obj obj/Graph.o  obj/stoper.o obj/GraphSearch.o obj/List.o  src/main.cpp inc/Exceptions.hh
	g++ $(CCFLAGS) src/main.cpp  obj/List.o obj/Graph.o obj/GraphSearch.o obj/stoper.o -o bb

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ $(CCFLAGS) -c src/stoper.cpp -o obj/stoper.o

obj/List.o: src/List.cpp inc/List.hh
	g++ $(CCFLAGS) -c src/List.cpp -o obj/List.o

obj/Graph.o: src/Graph.cpp inc/Graph.hh
	g++ $(CCFLAGS) -c src/Graph.cpp -o obj/Graph.o

obj/GraphSearch.o: src/GraphSearch.cpp inc/GraphSearch.hh
	g++ $(CCFLAGS) -c src/GraphSearch.cpp -o obj/GraphSearch.o

obj:
	mkdir obj
clean:
	rm -f obj/*.o
