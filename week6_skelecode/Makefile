# Compiler
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Executable name
EXEC = prog

# Source files
SRCS = main.cpp week6.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Compile each .cpp file into a .o file
%.o: %.cpp week6.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(EXEC)

# Run the program
run: $(EXEC)
	./$(EXEC)
