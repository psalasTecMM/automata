SHELL = /bin/sh

srcdir = .

# Target Variables
target := automata

# Source files
csrcs := $(wildcard *.cpp)

# Object files
objects := $(csrcs:%.cpp=%.o)

CPPFLAGS += -Wall -g

# Make commands

all: $(target)

.PHONY : clean
clean:
	rm -rf $(target) $(objects)

# Build rules

$(target): $(objects)
	$(CXX) $(LDFLAGS) $(LDLIBS) $^ $(OUTPUT_OPTION)

%.o : %.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< $(OUTPUT_OPTION)