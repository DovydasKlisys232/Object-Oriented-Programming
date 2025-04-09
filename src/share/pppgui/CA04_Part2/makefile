# Makefile for first PPPGUI program
# 28/3/2025 GB initial revision
# Variable values gleaned from last historic FLTK Code::Blocks project

#c++ compiler
CC=g++ 
#the test directory
PPPGUI_DIR=..
#compiler flags
CPPFLAGS=-g -I$(PPPGUI_DIR)/include 
#linker flags (e.g. -lftlk)
LDFLAGS=-g
#linker flags to be used
LDLIBS=-L$(PPPGUI_DIR)/lib -lpppgui -lfltk -lfltk_images

# $@ means the target name
# $^ is all the prerequisites (here chess.o)
chess.exe: chess.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS) 

#compiles .cpp to .o
%.o: %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< 
	
clean:
	rm -f *.o *.exe