CXXFLAGS = -std=c++11

Heapofstudents: address.o student.o date.o main.o
	g++ $(CXXFLAGS) address.o student.o date.o main.o -o Heapofstudents

main.o: main.cpp student.h date.h address.h
	g++ $(CXXFLAGS) -c main.cpp

address.o: address.h address.cpp
	g++ $(CXXFLAGS) -c address.cpp

student.o: student.h student.cpp address.h date.h
	g++ $(CXXFLAGS) -c student.cpp 

date.o: date.cpp date.h
	g++ $(CXXFLAGS) -c date.cpp

clean:
	rm -f Heapofstudents 
	rm -f *.o
	rm -f *.txt

leakcheck: Heapofstudents
	valgrind --leak-check=yes ./Heapofstudents

run: Heapofstudents
	./Heapofstudents
