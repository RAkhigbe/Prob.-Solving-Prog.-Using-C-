all: part3

image.o: image.cpp
	g++ -c -Werror -Wall image.cpp 
	
part3: image.o main.o
	g++ -o part3 image.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
