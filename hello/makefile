
objects = main.o test.o liudonghai.o

main : $(objects)
	g++ -o main $(objects) -lpthread

test.o : test.cpp ../header/test.h
	gcc -c test.cpp
	
liudonghai.o : liudonghai.cpp ../header/liudonghai.h
	gcc -c liudonghai.cpp

main.o : main.cpp ../header/test.h ../header/liudonghai.h
	gcc -c main.cpp

clean:
	rm -f main $(objects)