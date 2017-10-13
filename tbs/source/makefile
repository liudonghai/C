
object = main.o parse.o

tbs: $(object)
	g++ -o tbs $(object) -lpthread

main.o: main.cpp
	g++ -c main.cpp

parse.o: parse.cpp
	g++ -c parse.cpp

clean:
	rm -f tbs $(object)