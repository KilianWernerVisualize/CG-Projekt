#Compiler
CC = g++
#Compiler-Options
CFLAGS=-c -Wall
#Linker-Options
LDFLAGS=
#Sources
SOURCES=main.cpp
#Objects
OBJECTS=$(SOURCES:.cpp=.o)
#Executable
EXECUTABLE=Raytracer

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -f $(OBJECTS)