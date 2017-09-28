
object = main.o headtest.o headtest2.o
main: $(object)
	g++ -o main $(object)
main.o: main.cpp 
	g++ -c main.cpp

headtest.o: headtest.cpp
	g++ -c headtest.cpp

headtest2.o: headtest2.cpp
	g++ -c headtest2.cpp
	
clean:
	rm -f main $(object)