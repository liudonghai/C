
objects = main.o test.o liudonghai.o

main : $(objects)
	g++ -o main $(objects) -lpthread

test.o : test.cpp ../header/test.h
	g++ -c test.cpp
	
liudonghai.o : liudonghai.cpp ../header/liudonghai.h
	g++ -c liudonghai.cpp

main.o : main.cpp ../header/test.h ../header/liudonghai.h
	g++ -c main.cpp

clean:
	rm -f main $(objects)