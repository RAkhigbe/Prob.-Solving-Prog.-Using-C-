all: part5

main.o: main.cpp
	g++ -c -Werror -Wall -std=c++11 main.cpp 
	
part5: main.o jpeg.o
	g++ -o part5 main.o jpeg.o -L/usr/local/lib -ljpeg

jpeg.o: jpeg.cpp 
	g++ -c -std=c++11 jpeg.cpp 