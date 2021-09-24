
main: main.o lib.o
	g++ -o main main.o lib.o 
lib.o: lib.cpp
	g++ -c lib.cpp 
main.o: main.cpp
	g++ -c main.cpp 
clean:
	rm main.o lib.o program