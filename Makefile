CC				= g++
CPPFLAGS 		= -c -Wall -g
OutPut			= battle_city
_BTLC_VERSION	= \"0.0.1\"

Modules		= block.o map.o application.o
Main 		= main.o

VPATH = ./src

all: $(Modules) $(Main) 
		$(CC) $^ -o $(OutPut) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
		chmod u=rwx,g=rx,o=rx ./$(OutPut)

start:
		./$(OutPut)

.PHONY: clean 
clean:
	rm -rf *.o

.PHONY: clean-all
clean-all:
	rm -rf *.o
	rm $(OutPut)
