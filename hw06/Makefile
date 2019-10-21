all: part6

Angle.o: Angle.cpp
	g++ -c -Werror -Wall Angle.cpp 
	
part6: Angle.o main.o
	g++ -o part6 Angle.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
