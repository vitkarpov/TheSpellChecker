bin/spc.exe : main.o dictionary.o
	g++ main.o dictionary.o -o bin/spc.exe

dictionary.o : inc/dictionary.h src/dictionary.cpp
	g++ -I inc -c src/dictionary.cpp

main.o : src/main.cpp inc/dictionary.h
	g++ -I inc -c src/main.cpp
