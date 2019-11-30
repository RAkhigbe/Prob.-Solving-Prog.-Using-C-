all: part9

FishyFish.o: FishyFish.cpp FishyFish.hpp DrunkenFish.cpp DrunkenFish.hpp
	g++ -c -Werror -Wall FishyFish.cpp DrunkenFish.cpp

DrunkenFish: FishyFish.cpp FishyFish.hpp DrunkenFish.cpp DrunkenFish.hpp
	g++ -c -Werror -Wall FishyFish.cpp DrunkenFish.cpp
	
part9: FishyFish.o DrunkenFish.o main.o
	g++ -o part9 FishyFish.o DrunkenFish.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
