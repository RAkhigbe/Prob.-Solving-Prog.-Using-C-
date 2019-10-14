all: part1

Random1.o: Random1.cpp
	g++ -c -Werror -Wall Random1.cpp 
	
part1: Random1.o main.o
	g++ -o part1 Random1.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
