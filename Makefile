CC = g++
LINK_FLAGS = -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system;
CC_FLAGS = -Wall -Wextra -O3
EXEC = bin/main
SOURCES=$(wildcard src/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

default: all clean

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LINK_FLAGS)

%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

clean :
	rm $(OBJECTS)
