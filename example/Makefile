d : ourStr.o ourStrApp.o
	g++ ourStr.o ourStrApp.o -o d
ourStr.o : ourStr.cpp ourStr.h
	g++ -Wall -ansi -pedantic -c ourStr.cpp
ourStrApp.o : ourStrApp.cpp ourStr.h
	g++ -Wall -ansi -pedantic -c ourStrApp.cpp
cleanall:
	@rm *.o d

