all: part8

ImageClass.o: ImageClass.cpp ImageClass.hpp JPEGClass.cpp JPEGClass.hpp
	g++ -c -Werror -Wall ImageClass.cpp JPEGClass.cpp

JPEGClass.o: ImageClass.cpp ImageClass.hpp JPEGClass.cpp JPEGClass.hpp
	g++ -c -Werror -Wall ImageClass.cpp JPEGClass.cpp
	
part8: ImageClass.o JPEGClass.o main.o 
	g++ -o part8 ImageClass.o JPEGClass.o main.o -L/usr/local/lib -ljpeg

main.o: main.cpp
	g++ -c -Werror -Wall main.cpp
