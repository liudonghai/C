
sort_test = sort_test.o ../sort/sort.o

sort_test: $(sort_test)
	g++ -o sort_test $(sort_test)

sort_test.o: sort_test.cpp
	g++ -c sort_test.cpp

clean:
	rm -f sort_test sort_test.o