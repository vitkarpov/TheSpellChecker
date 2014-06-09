bin/spc.exe : main.o
	g++ main.o -o bin/spc

main.o : src/main.cpp
	g++ -I inc -c src/main.cpp
