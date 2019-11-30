all: part7

SwimmingFish.o: SwimmingFish.cpp
	g++ -c -Werror -Wall SwimmingFish.cpp 
	
part7: SwimmingFish.o main.o
	g++ -o part7 SwimmingFish.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
