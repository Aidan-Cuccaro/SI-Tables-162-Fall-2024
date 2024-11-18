# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Target executable
TARGET = prog

# Object files
OBJS = main.o circle.o triangle.o square.o

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp shape.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

circle.o: circle.cpp shape.hpp
	$(CXX) $(CXXFLAGS) -c circle.cpp

triangle.o: triangle.cpp shape.hpp
	$(CXX) $(CXXFLAGS) -c triangle.cpp

square.o: square.cpp shape.hpp
	$(CXX) $(CXXFLAGS) -c square.cpp

clean:
	rm -f $(OBJS) $(TARGET)

