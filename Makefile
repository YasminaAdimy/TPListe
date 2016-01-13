all: main
main: main.o node.o Vector.o List.o
	g++ -g -std=c++11 main.o node.o Vector.o List.o -o main
main.o: main.cpp Node.h Vector.h List.h
	g++ -g -std=c++11 -c main.cpp -o main.o
node.o: Node.cpp Node.h Vector.h
	g++ -g -std=c++11 -c Node.cpp -o node.o
Vector.o: Vector.cpp Vector.h
	g++ -g -std=c++11 -c Vector.cpp -o Vector.o
List.o: List.h List.cpp Node.h Vector.h
	g++ -g -std=c++11 -c List.cpp -o List.o
	
clean:
	rm -f *.o
