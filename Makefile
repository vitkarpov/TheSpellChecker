bin/spc.exe : main.o dictionary.o
	g++ -std=c++11 main.o dictionary.o -o bin/spc.exe

dictionary.o : inc/dictionary.h src/dictionary.cpp
	g++ -std=c++11 -I inc -c src/dictionary.cpp

main.o : src/main.cpp inc/dictionary.h
	g++ -std=c++11 -I inc -c src/main.cpp
