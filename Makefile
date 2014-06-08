bin/spc.exe : main.o dictionary.o
	g++ main.o dictionary.o -o bin/spc.exe

dictionary.o : src/dictionary/dictionary.h src/dictionary/dictionary.cpp
	g++ -I inc -c src/dictionary/dictionary.cpp

main.o : src/main.cpp src/dictionary/dictionary.h
	g++ -I inc -c src/main.cpp
