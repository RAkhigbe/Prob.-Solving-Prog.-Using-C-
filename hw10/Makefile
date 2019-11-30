all: part10

LastHwWoohoo.o: LastHwWoohoo.cpp LastHwWoohoo.hpp
	g++ -c -Werror -Wall LastHwWoohoo.cpp
	
part10: LastHwWoohoo.o main.o
	g++ -o part10 LastHwWoohoo.o main.o

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
