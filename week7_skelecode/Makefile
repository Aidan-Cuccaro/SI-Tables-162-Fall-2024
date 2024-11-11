CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = main.cpp building.cpp house.cpp office.cpp library.cpp

OBJS = $(SRCS:.cpp=.o)

EXEC = prog

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
