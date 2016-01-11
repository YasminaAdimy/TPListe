all: main
main: main.o node.o Vector.o Liste.o
	g++ -std=c++11 main.o node.o Vector.o Liste.o -o main
main.o: main.cpp Node.h Vector.h Liste.h
	g++ -std=c++11 -c main.cpp -o main.o
node.o: Node.cpp Node.h Vector.h
	g++ -std=c++11 -c Node.cpp -o node.o
vector.o: Vector.cpp Vector.h
	g++ -std=c++11 -c Vector.cpp -o vector.o
Liste.o: Liste.h Liste.cpp Node.h Vector.h
	g++ -std=c++11 -c Liste.cpp -o Liste.o
	
clean:
	rm -f *.o
