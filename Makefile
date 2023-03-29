all:
	g++ -g -Wall -std=c++11 Main.cpp HashTableP.cpp Parser.cpp City.cpp -o hashProgram
	./hashProgram
