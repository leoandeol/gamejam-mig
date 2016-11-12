CC = g++
LINK_FLAGS = -lpthread -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system;
CC_FLAGS = -std=c++11 -Wall -Wextra
EXEC = bin/main
SOURCES=$(wildcard src/*.cpp src/*/*.cpp src/*/*/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

default: all clean

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LINK_FLAGS)

%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

clean :
	rm $(OBJECTS)
