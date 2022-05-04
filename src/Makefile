Lexer: Main.o Scanner.o Token.o ErrorHandler.o FileReader.o
	g++ -o Lexer Main.o Scanner.o Token.o ErrorHandler.o FileReader.o

Main.o: Main.cpp Scanner.h Token.h ErrorHandler.h FileReader.h 
	g++ -std=c++17 -Wall -c Main.cpp

Scanner.o: Scanner.cpp ErrorHandler.h Token.h 
	g++ -std=c++17 -Wall -c Scanner.cpp 

Token.o: Token.cpp 
	g++ -std=c++17 -Wall -c Token.cpp 

ErrorHandler.o: ErrorHandler.cpp
	g++ -std=c++17 -Wall -c ErrorHandler.cpp

FileReader.o: FileReader.cpp
	g++ -std=c++17 -Wall -c FileReader.cpp

clean:
	rm *.o Lexer

