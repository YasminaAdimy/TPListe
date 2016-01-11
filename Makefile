all: main
main: main.o node.o Vector.o
	g++ -std=c++11 main.o node.o Vector.o -o main
main.o: main.cpp Node.h Vector.h
	g++ -std=c++11 -c main.cpp -o main.o
node.o: Node.cpp Node.h Vector.h
	g++ -std=c++11 -c Node.cpp -o node.o
vector.o: Vector.cpp vector.h  
  
clean:
	rm -f *.o
