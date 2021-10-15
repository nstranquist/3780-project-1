main: main.cpp
	g++ -Wall -g -o main main.cpp

main2: main2.cpp
	g++ -Wall -g -o main2 main2.cpp

main3: main3.cpp
	g++ -Wall -g -o main3 main3.cpp

clean:
	rm -rf main main2 main3 *.o