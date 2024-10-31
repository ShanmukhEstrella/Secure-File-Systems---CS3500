# Makefile for compiling main.cpp and encryption.cpp

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable
TARGET = a.out

# Source files
SRCS = main.cpp encryption.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean up generated files
clean:
	rm -f $(TARGET)
