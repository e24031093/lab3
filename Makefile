sort_compare: Clock.o sort_compare.o
	g++ -o sort_compare Clock.o sort_compare.o

sort_compare.o: sort_compare.cpp Clock.o
	g++ -c sort_compare.cpp Clock.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp Clock.h

clean:
	rm a *.o
