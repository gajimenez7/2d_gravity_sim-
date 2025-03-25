# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Source and header directories
SD = src

# Source files
SRCS = $(SD)/main.cpp $(SD)/model.cpp $(SD)/view.cpp $(SD)/controller.cpp

# Test Source file
SRCS_TEST = $(SD)/test.cpp

# Header files
HEADERS = $(SD)/model.h $(SD)/view.h $(SD)/controller.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Test Object file
OBJS_TEST = $(SRCS_TEST:.cpp=.o)

# Output executable
TARGET = gravity_sim

# Test Output executable
TARGET_TEST = sim_test

# Default rule to build the executable
all: $(TARGET)

# Test default rule to build the test executable
test: $(TARGET_TEST)

# Link object files to create the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Link test object files to create the final test executable
$(TARGET_TEST): $(OBJS_TEST)
	$(CXX) $(CXXFLAGS) -o $(TARGET_TEST) $(OBJS_TEST)

# Compile .cpp files into .o files, ensuring headers are dependencies
$(SD)/%.o: $(SD)/%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile test.cpp separately without requiring the main headers
$(SD)/test.o: $(SD)/test.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(OBJS_TEST) $(TARGET) $(TARGET_TEST)

# Run the program
run: all
	./$(TARGET)

# Run test program

run_test: test
	./$(TARGET_TEST)

.PHONY: all test clean run run_test
